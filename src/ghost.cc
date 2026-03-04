#include "ghost.h"

Ghost::Ghost(float x, float y, cor ghost){
	setPosX(x);
	setPosY(y);
	setCor(ghost);
	switch (ghost) {
		case VERMELHO:
			setDirAtual(LEFT);
			setMovimento(DISPERSAR);
			setLivre(true);
			break;
		case ROSA:
			setDirAtual(DOWN);
			setMovimento(PENDENTE);
			setLivre(false);
			break;
		case AZUL:
			setDirAtual(UP);
			setMovimento(PENDENTE);
			setLivre(false);
			break;
		case AMARELO:
			setDirAtual(UP);
			setMovimento(PENDENTE);
			setLivre(false);
			break;
	}
	setComido(false);
	setVelocidade();
}

Ghost::~Ghost(){}

void Ghost::move(){
	switch ( getDirAtual() )
	{
	case UP:
		Entity::move(0, -0.2f);
		break;
	case DOWN:
		Entity::move(0, 0.2f);
		break;
	case LEFT:
		Entity::move(-0.2f, 0);
		break;
	case RIGHT:
		Entity::move(0.2f, 0);
		break;
	}
}

direction Ghost::getDirAtual(){
	return _dirAtual;
}

cor Ghost::getCor(){
	return _corGhost;
}

movement Ghost::getMovimento(){
	return _movTipo;
}

float Ghost::getVelocidade(){
	return _vel;
}

bool Ghost::getComido(){
	return _comido;
}

bool Ghost::isOutOfCage(){
	return _livre;
}

void Ghost::setDirAtual(direction d){
	_dirAtual = d;
}

void Ghost::setCor(cor c){
	_corFant = c;
}

void Ghost::setMovimento(movement m){
	_movTipo = m;
}

void Ghost::setVelocidade(){
	if(getMovimento() == ASSUSTAR){
		_vel = 0.05f;
	}
	else {
		_vel = 0.1f;
	}
}

void Ghost::setComido(bool c){
	_comido = c;
}

void Ghost::setLivre(bool l){
	_livre = l;
}