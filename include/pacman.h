#ifndef PACMAN_H
#define PACMAN_H

#include "entity.h"
#include "direction.h"

class Pacman: public Entity{
public:
	Pacman();	// Construtor
	~Pacman();

	//Metodos herdados
	void init();
	void loop();
	void render(sf::RenderWindow* window);
	void keyPressed(int code);
	void keyReleased(int code);

	// Metodos para funcionalidade
	void reset();
	void move();
	void stop();

	// Metodos para acesso de atributos
	direction getDirAtual();
	direction getDirSalva();
	float getAngulo();
	int getDotsEaten();
	bool isDead();

	void setDirAtual(direction d);
	void setDirSalva(direction d);
	void setAngulo(float a);
	void eatDot();
	void setDead(bool d);
private:
	constexpr static const float SIZE = 1.7f;
	constexpr static const float SPEED = 0.05f;
	int pacmanAnimationStep;
	direction _dirAtual;
	direction _dirSalva;
	float _angulo;
	bool _dead;
	int _eatenDots;
};

#endif