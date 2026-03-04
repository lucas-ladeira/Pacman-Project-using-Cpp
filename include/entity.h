#ifndef ENTITY_H
#define ENTITY_H

#include "gameState.h"

class Entity: public GameState{
public:
	Entity(int x, int y);
	//~Entity();
	
	// Metodos para funcionalidades
	void move(float x, float y);
	void teleport(int x, int y);

	// Metodos para acesso de atributos
	float getPosX();
	float getPosY();
	int getTileX();
	int getTileY();

	void setPosX(float x);
	void setPosY(float y);
	void setTileX(int x);
	void setTileY(int y);
private:
	int _tileX;
	int _tileY;
	float _posX;
	float _posY;
};

#endif