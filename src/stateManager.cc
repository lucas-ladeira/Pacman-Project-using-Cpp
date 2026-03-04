#include "stateManager.h"
#include <iostream>

StateManager::StateManager(){
}

StateManager::~StateManager(){
}

void StateManager::addState(GameState* state) {
	states.push_front(state);
	states.front()->init();
}

void StateManager::loop() {
	for(auto state: states){
		state->loop();
	}
}

void StateManager::render(sf::RenderWindow* window) {
	for(auto state: states){
		state->render(window);
	}
}

void StateManager::keyPressed(int code) {
	for(auto state: states){
		state->keyPressed(code);
	}
}
	
void StateManager::keyReleased(int code) {
	for(auto state: states){
		state->keyReleased(code);
	}
}
