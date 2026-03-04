#include "entity.h"

#include <cmath>

Entity::Entity(int x, int y){
	_tileX = x;
	_tileY = y;
	_posX = x * 16.0f + 8.0f + 8.0f;
	_posY = y * 16.0f + 8.0f;
}

void Entity::move(float x, float y){
	setPosX( getPosX() + x );
	setPosY( getPosY() + y );

	if( (int)(getPosX() + 8) % 16 == 0 && (int)(getPosY() + 8) % 16 == 0 ){
		setTileX( (int) round((getPosX() - 8) / 16) );
		setTileY( (int) round((getPosY() - 8) / 16) );
	}
}

void Entity::teleport(int x, int y){
	setTileX(x);
	setTileY(y);
	setPosX( x * 16.0f + 8.0f );
	setPosY( y * 16.0f + 8.0f );
}

float Entity::getPosX(){
	return _posX;
}

float Entity::getPosY(){
	return _posY;
}

int Entity::getTileX(){
	return _tileX;
}

int Entity::getTileY(){
	return _tileY;
}

void Entity::setPosX(float x){
	_posX = x;
}

void Entity::setPosY(float y){
	_posY = y;
}

void Entity::setTileX(int x){
	_tileX = x;
}

void Entity::setTileY(int y){
	_tileY = y;
}
