#include "playingState.h"

#include "SFML/Graphics.hpp"

#include <iostream>
#include <random>

#define TAM 1.7f

using namespace sf;

PlayingState::PlayingState(){
}

PlayingState::~PlayingState(){
}

void PlayingState::init() {
	console = Console("PlayingState");

	console.writeLine("Inicializacao feita.");
	
	ghostAnimationStep = 0;
	waitTime = 0;
}

void PlayingState::loop() {
	//pacman.move();
}

void PlayingState::render(sf::RenderWindow* window) {
	
	ghostAnimationStep = (ghostAnimationStep + 1) % (Resources::getQtdeGhostSprite()*500);

	sf::Sprite maze = Resources::getMazeSprite();
	
	sf::Sprite redGhost = Resources::getGhostSprite('r', ghostAnimationStep/500);
	sf::Sprite blueGhost = Resources::getGhostSprite('b', ghostAnimationStep/500);
	sf::Sprite pinkyGhost = Resources::getGhostSprite('p', ghostAnimationStep/500);
	sf::Sprite yellowGhost = Resources::getGhostSprite('y', ghostAnimationStep/500);

	maze.setScale( sf::Vector2f(TAM, TAM) );
	maze.setPosition( sf::Vector2f(63.0f, 47.0f) );
	window->draw(maze);
	
	

	
	
	redGhost.setScale( sf::Vector2f(TAM, TAM) );
	redGhost.setPosition( sf::Vector2f(210*0.85f+63.f, 170*0.85f+47.f) );
	window->draw(redGhost);

	blueGhost.setScale( sf::Vector2f(TAM, TAM) );
	blueGhost.setPosition( sf::Vector2f(180*0.85f+63.f, 215*0.85f+47.f) );
	window->draw(blueGhost);

	pinkyGhost.setScale( sf::Vector2f(TAM, TAM) );
	pinkyGhost.setPosition( sf::Vector2f(210*0.85f+63.f, 215*0.85f+47.f) );
	window->draw(pinkyGhost);

	yellowGhost.setScale( sf::Vector2f(TAM, TAM) );
	yellowGhost.setPosition( sf::Vector2f(240*0.85f+63.f, 215*0.85f+47.f) );
	window->draw(yellowGhost);
}

void PlayingState::keyPressed(int code) {
	console.writeLine("Pressed");
}

void PlayingState::keyReleased(int code) {
	console.writeLine("Released");
}
