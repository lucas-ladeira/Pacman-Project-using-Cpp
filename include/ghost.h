#ifndef GHOST_H
#define GHOST_H

#include "pacman.h"
#include "entity.h"
#include "directions.h"

typedef enum {DISPERSAR, PERSEGUIR, ASSUSTAR, DEIXAR, MORTO, PENDENTE} movement;

typedef enum {VERMELHO, AZUL, ROSA, AMARELO} cor;



/* Fantasmas:
 * VERMELHO	- Blinky
 * AZUL		- Inky
 * ROSA		- Pinky
 * AMARELO	- Clyde
 */

// Cor, nome, estado, direcao, velocidade

//Comportamento: Em movimento, Mudando de estado

class Ghost: public Entity{
public:
	Ghost(float x, float y, cor ghost);
	~Ghost();

	// Metodos para funcionalidades
	void move();

	// Metodos para acesso de atributos
	direction getDirAtual();
	cor getCor();
	movement getMovimento();
	float getVelocidade();
	bool getComido();
	bool isOutOfCage();

	void setDirAtual(direction d);
	void setCor(cor c);
	void setMovimento(movement m);
	void setVelocidade(float v);
	void setComido(bool c);
	void setLivre(bool l);
private:
	direction _dirAtual;
	cor _corGhost;
	movement _movTipo;
	float _vel;
	bool _comido;
	bool _livre;
	direction tempDir = NONE;
};

#endif