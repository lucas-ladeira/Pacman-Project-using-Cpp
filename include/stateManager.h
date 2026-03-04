#ifndef STATE_MANAGER_H
#define STATE_MANAGER_H

#include "gameState.h"
#include "console.h"

#include <list>

class StateManager{
public:
	StateManager();
	~StateManager();
	void addState(GameState* state);
	void loop();
	void render(sf::RenderWindow* window);
	void keyPressed(int code);
	void keyReleased(int code);
private:
	std::list<GameState*> states;
	Console console;
};

#endif