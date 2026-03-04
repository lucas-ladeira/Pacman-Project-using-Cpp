#ifndef PLAYING_STATE_H
#define PLAYING_STATE_H

#include "gameState.h"
#include "console.h"
#include "window.h"
#include "resources.h"

class PlayingState:public GameState {
public:
	PlayingState();
	~PlayingState();
	
	void init();
	void loop();
	void render(sf::RenderWindow* window);
	void keyPressed(int code);
	void keyReleased(int code);
private:
	Console console;
	//Pacman pacman;
	int ghostAnimationStep;

	int waitTime;
};

#endif