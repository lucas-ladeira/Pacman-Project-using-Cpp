#include "pacman.h"

#include <SFML/Graphics.hpp>
#include <iostream>

#include "resources.h"
#include "window.h"


// Construtor
Pacman::Pacman(): Entity(13, 26){
	setPosX(241.5f);
	setPosY(353.0f);
	setDirAtual(NONE);
	setDirSalva(NONE);

	_eatenDots = 0;
}

Pacman::~Pacman(){}

void Pacman::init(){
	pacmanAnimationStep = 0;
	//setPosX(210*0.85+63+14);
	//setPosY(360*0.85+47+14);
	setPosX(0);
	setPosY(0);
}

void Pacman::loop(){

    const float wallSizeX = 13.3;
    const float wallSizeY = 13.7;

    float posX = getPosX();
	float posY = getPosY();

    float targetOffsetX = 0;
    float targetOffsetY = 0;

    direction curDir = getDirSalva();

	switch(curDir){
		case RIGHT:
			posX += SPEED;
            targetOffsetX = 0;
			setAngulo(180);
			break;
		case LEFT:
			posX -= SPEED;
            targetOffsetX = -wallSizeX/2;
			setAngulo(0);
			break;
		case UP:
			posY -= SPEED;
            targetOffsetY = -wallSizeY/2;
			setAngulo(90);
			break;
		case DOWN:
			posY += SPEED;
            targetOffsetY = wallSizeY/2;
			setAngulo(270);
			break;
	}

    float targetTileX = round(posX/wallSizeX + 1);
    float targetTileY = round(posY/wallSizeY + 1);

    float afterTargetTileX = round((targetOffsetX + posX)/wallSizeX + 1);
    float afterTargetTileY = round((targetOffsetY + posY)/wallSizeY + 1);

    tile targetTileType = Window::maze.getTile(targetTileX, targetTileY);
    tile afterTargetType = Window::maze.getTile(afterTargetTileX,
                                                afterTargetTileY);

    if(targetTileType == P) {

        if(targetTileX == 0 && curDir == LEFT) {
            setPosX(26*wallSizeX);
            return;
        }
        else if(curDir == RIGHT) {
            setPosX(0);
            return;
        }
    }

    if(targetTileType != W && afterTargetType != W) {

        setPosX(posX);
        setPosY(posY);
    }
}

void Pacman::render(sf::RenderWindow* window){
	pacmanAnimationStep = (pacmanAnimationStep + 1) % (Resources::getQtdePacmanSprite()*500);
	sf::Sprite pacman = Resources::getPacmanSprite(pacmanAnimationStep/500);

	pacman.setOrigin( sf::Vector2f(7.f, 7.f) );
	pacman.setRotation( sf::degrees(getAngulo()) );
	pacman.setScale( sf::Vector2f(SIZE, SIZE) );
	pacman.setPosition( sf::Vector2f(83.f + getPosX(), 66.5f + getPosY()) );
	window->draw(pacman);
}

void Pacman::keyPressed(int code){
	auto key = static_cast<sf::Keyboard::Key>(code);
	switch(key){
		case sf::Keyboard::Key::Left:
			std::cout << "Teclado esquerda!" << std::endl;
			setDirSalva(LEFT);
			break;
		case sf::Keyboard::Key::Right:
			std::cout << "Teclado direita!" << std::endl;
			setDirSalva(RIGHT);
			break;
		case sf::Keyboard::Key::Down:
			std::cout << "Teclado para baixo!" << std::endl;
			setDirSalva(DOWN);
			break;
		case sf::Keyboard::Key::Up:
			std::cout << "Teclado para cima!" << std::endl;
			setDirSalva(UP);
			break;
		default:
			break;
	}
}


void Pacman::keyReleased(int code){
}


//Metodos para funcionalidade
void Pacman::reset(){
	setPosX(241.5f);
	setPosY(353.0f);
	setDirAtual(NONE);
	setDirSalva(NONE);
	setAngulo(0.0f);
}

void Pacman::move(){
	switch( getDirAtual() ){
	case UP:
		Entity::move(0, -0.4f);
		break;
	case DOWN:
		Entity::move(0, 0.4f);
		break;
	case LEFT:
		Entity::move(-0.4f, 0);
		break;
	case RIGHT:
		Entity::move(0.4f, 0);
		break;
	}
}

void Pacman::stop(){
	if(getDirAtual() != NONE){
		if ((int)(getPosX() + 8) % 16 == 0 && (int)(getPosY() + 8) % 16 == 0)
			setDirAtual(NONE);
	}
}

// Metodos para retorno de atributos
direction Pacman::getDirAtual(){
	return _dirAtual;
}

direction Pacman::getDirSalva(){
	return _dirSalva;
}

float Pacman::getAngulo(){
	return _angulo;
}

int Pacman::getDotsEaten(){
	return _eatenDots;
}

bool Pacman::isDead(){
	return _dead;
}

// Metodos para definicao dos atributos
void Pacman::setDirAtual(direction d){
	_dirAtual = d;
}

void Pacman::setDirSalva(direction d){
	_dirSalva = d;
}

void Pacman::setAngulo(float a){
	_angulo = a;
}

void Pacman::eatDot(){
	_eatenDots++;
}

void Pacman::setDead(bool d){
	_dead = d;
}
