#include "window.h"

#include "pacman.h"
#include "playingState.h"

Console Window::console("Window");
sf::RenderWindow Window::window;
StateManager Window::gamestates;
Resources Window::resources;
Maze Window::maze;

Window::Window()
{
	//load_and_bind_textures();
}

Window::~Window(){
}

void Window::init(){
	console.writeLine("Inicializando...");
	resources.load_and_bind_textures();
	window.create(sf::VideoMode({512, 512}), "Pacman");
	console.writeLine("Janela criada!");
	gamestates.addState(new PlayingState);
	gamestates.addState(new Pacman);
}

void Window::draw_texture(unsigned int texture, int length, int height, float angle)
{
}

void Window::run()
{
	//Link: https://www.sfml-dev.org/tutorials/3.0/window/events/
	window.setKeyRepeatEnabled(false);

	while (window.isOpen())
	{
		while (const std::optional<sf::Event> event = window.pollEvent())
		{
			if (event->is<sf::Event::Closed>()) {
				window.close();
			}
			else if (const auto* keyEvent = event->getIf<sf::Event::KeyPressed>()) {
				if (keyEvent->code == sf::Keyboard::Key::P) {
					std::cout << "Teclado para PAUSAR" << std::endl;
				} else if (keyEvent->code == sf::Keyboard::Key::Q) {
					std::cout << "Teclado para FECHAR" << std::endl;
					exit(0);
				} else if (keyEvent->code == sf::Keyboard::Key::R) {
					std::cout << "Teclado para RESET" << std::endl;
				} else {
					gamestates.keyPressed(static_cast<int>(keyEvent->code));
				}
			}
			else if (event->is<sf::Event::KeyReleased>()) {
				const auto& keyEvent = event->getIf<sf::Event::KeyReleased>();
				gamestates.keyReleased(static_cast<int>(keyEvent->code));
			}
		}

		gamestates.loop();

		window.clear();

		gamestates.render(&window);

		window.display();
	}
}
