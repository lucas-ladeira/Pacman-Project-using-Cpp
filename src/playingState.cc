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

	maze.setScale(TAM, TAM);
	maze.setPosition( 63.0f, 47.0f );
	window->draw(maze);
	
	

	
	
	redGhost.setScale(TAM, TAM);
	redGhost.setPosition(210*0.85+63, 170*0.85+47);
	window->draw(redGhost);

	blueGhost.setScale(TAM, TAM);
	blueGhost.setPosition(180*0.85+63, 215*0.85+47);
	window->draw(blueGhost);

	pinkyGhost.setScale(TAM, TAM);
	pinkyGhost.setPosition(210*0.85+63, 215*0.85+47);
	window->draw(pinkyGhost);

	yellowGhost.setScale(TAM, TAM);
	yellowGhost.setPosition(240*0.85+63, 215*0.85+47);
	window->draw(yellowGhost);
}

void PlayingState::keyPressed(int code) {
	console.writeLine("Pressed");
}

void PlayingState::keyReleased(int code) {
	console.writeLine("Released");
}
