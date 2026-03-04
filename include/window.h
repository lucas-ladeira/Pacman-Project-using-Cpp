#ifndef window_h
#define window_h

#include <iostream>
#include <png.h>
#include <SFML/Graphics.hpp>

#include "console.h"
#include "stateManager.h"
#include "resources.h"
#include "maze.h"

class Window
{
public:
	Window();
	~Window();

	static void init();
	static void run();

	static void draw_texture(unsigned int texture, int length, int height, float angle);

    static Maze maze; //TODO: lidar com o labirinto, não deve ser publico

private:
	static sf::RenderWindow window;
	static Console console;
	static StateManager gamestates;
	static Resources resources;
};

#endif
