#include "resources.h"

sf::Texture Resources::maze_tex;
sf::Sprite Resources::maze_sprite;
sf::Texture Resources::pill_tex;
sf::Sprite Resources::pill_sprite;
sf::Texture Resources::bigPill_tex;
sf::Sprite Resources::bigPill_sprite;

std::array<sf::Texture, 3> Resources::pacman_tex;
std::array<sf::Sprite, 4> Resources::pacman_sprite;
std::array<sf::Texture, 11> Resources::dead_pacman_tex;
std::array<sf::Sprite, 11> Resources::dead_pacman_sprite;

std::array<sf::Texture, 2> Resources::red_ghost_tex;
std::array<sf::Sprite, 2> Resources::red_ghost_sprite;
std::array<sf::Texture, 2> Resources::pink_ghost_tex;
std::array<sf::Sprite, 2> Resources::pink_ghost_sprite;
std::array<sf::Texture, 2> Resources::blue_ghost_tex;
std::array<sf::Sprite, 2> Resources::blue_ghost_sprite;
std::array<sf::Texture, 2> Resources::yellow_ghost_tex;
std::array<sf::Sprite, 2> Resources::yellow_ghost_sprite;
std::array<sf::Texture, 4> Resources::scared_ghost_tex;
std::array<sf::Sprite, 4> Resources::scared_ghost_sprite;

std::array<sf::Texture, 4> Resources::eye_tex;
std::array<sf::Sprite, 4> Resources::eye_sprite;

std::array<sf::Texture, 10> Resources::num_tex;
std::array<sf::Sprite, 10> Resources::num_sprite;
sf::Texture Resources::score_200_tex;
sf::Sprite Resources::score_200_sprite;
sf::Texture Resources::score_400_tex;
sf::Sprite Resources::score_400_sprite;
sf::Texture Resources::score_800_tex;
sf::Sprite Resources::score_800_sprite;
sf::Texture Resources::score_1600_tex;
sf::Sprite Resources::score_1600_sprite;
sf::Texture Resources::ready_tex;
sf::Sprite Resources::ready_sprite;
sf::Texture Resources::gameover_tex;
sf::Sprite Resources::gameover_sprite;
sf::Texture Resources::life_tex;
sf::Sprite Resources::life_sprite;
sf::Texture Resources::score_tex;
sf::Sprite Resources::score_sprite;
sf::Texture Resources::high_tex;
sf::Sprite Resources::high_sprite;
sf::Texture Resources::score_100_tex;
sf::Sprite Resources::score_100_sprite;
sf::Texture Resources::score_300_tex;
sf::Sprite Resources::score_300_sprite;

sf::Texture Resources::cherry_tex;
sf::Sprite Resources::cherry_sprite;
sf::Texture Resources::strawberry_tex;
sf::Sprite Resources::strawberry_sprite;

Resources::Resources(){
}

Resources::~Resources(){
}

void Resources::load_and_bind_textures(){
	// Bind map textures
	maze_tex.loadFromFile("sprites/maze/maze.png");
	maze_sprite.setTexture(maze_tex);
	pill_tex.loadFromFile("sprites/maze/p-0.png");
	pill_sprite.setTexture(pill_tex);
	bigPill_tex.loadFromFile("sprites/maze/p-1.png");
	bigPill_sprite.setTexture(bigPill_tex);

	// Bind Pacman textures
	pacman_tex[0].loadFromFile("sprites/pacman/0.png");
	pacman_sprite[0].setTexture(pacman_tex[0]);
	pacman_tex[1].loadFromFile("sprites/pacman/1.png");
	pacman_sprite[1].setTexture(pacman_tex[1]);
	pacman_sprite[3].setTexture(pacman_tex[1]);
	pacman_tex[2].loadFromFile("sprites/pacman/2.png");
	pacman_sprite[2].setTexture(pacman_tex[2]);
	dead_pacman_tex[0].loadFromFile("sprites/pacman/d-0.png");
	dead_pacman_sprite[0].setTexture(dead_pacman_tex[0]);
	dead_pacman_tex[1].loadFromFile("sprites/pacman/d-1.png");
	dead_pacman_sprite[1].setTexture(dead_pacman_tex[1]);
	dead_pacman_tex[2].loadFromFile("sprites/pacman/d-2.png");
	dead_pacman_sprite[2].setTexture(dead_pacman_tex[2]);
	dead_pacman_tex[3].loadFromFile("sprites/pacman/d-3.png");
	dead_pacman_sprite[3].setTexture(dead_pacman_tex[3]);
	dead_pacman_tex[4].loadFromFile("sprites/pacman/d-4.png");
	dead_pacman_sprite[4].setTexture(dead_pacman_tex[4]);
	dead_pacman_tex[5].loadFromFile("sprites/pacman/d-5.png");
	dead_pacman_sprite[5].setTexture(dead_pacman_tex[5]);
	dead_pacman_tex[6].loadFromFile("sprites/pacman/d-6.png");
	dead_pacman_sprite[6].setTexture(dead_pacman_tex[6]);
	dead_pacman_tex[7].loadFromFile("sprites/pacman/d-7.png");
	dead_pacman_sprite[7].setTexture(dead_pacman_tex[7]);
	dead_pacman_tex[8].loadFromFile("sprites/pacman/d-8.png");
	dead_pacman_sprite[8].setTexture(dead_pacman_tex[8]);
	dead_pacman_tex[9].loadFromFile("sprites/pacman/d-9.png");
	dead_pacman_sprite[9].setTexture(dead_pacman_tex[9]);
	dead_pacman_tex[10].loadFromFile("sprites/pacman/d-10.png");
	dead_pacman_sprite[10].setTexture(dead_pacman_tex[10]);

	// Bind ghost textures
	red_ghost_tex[0].loadFromFile("sprites/ghosts/r-0.png");
	red_ghost_sprite[0].setTexture(red_ghost_tex[0]);
	red_ghost_tex[1].loadFromFile("sprites/ghosts/r-1.png");
	red_ghost_sprite[1].setTexture(red_ghost_tex[1]);
	pink_ghost_tex[0].loadFromFile("sprites/ghosts/p-0.png");
	pink_ghost_sprite[0].setTexture(pink_ghost_tex[0]);
	pink_ghost_tex[1].loadFromFile("sprites/ghosts/p-1.png");
	pink_ghost_sprite[1].setTexture(pink_ghost_tex[1]);
	blue_ghost_tex[0].loadFromFile("sprites/ghosts/b-0.png");
	blue_ghost_sprite[0].setTexture(blue_ghost_tex[0]);
	blue_ghost_tex[1].loadFromFile("sprites/ghosts/b-1.png");
	blue_ghost_sprite[1].setTexture(blue_ghost_tex[1]);
	yellow_ghost_tex[0].loadFromFile("sprites/ghosts/y-0.png");
	yellow_ghost_sprite[0].setTexture(yellow_ghost_tex[0]);
	yellow_ghost_tex[1].loadFromFile("sprites/ghosts/y-1.png");
	yellow_ghost_sprite[1].setTexture(yellow_ghost_tex[1]);
	scared_ghost_tex[0].loadFromFile("sprites/ghosts/s-0.png");
	scared_ghost_sprite[0].setTexture(scared_ghost_tex[0]);
	scared_ghost_tex[1].loadFromFile("sprites/ghosts/s-1.png");
	scared_ghost_sprite[1].setTexture(scared_ghost_tex[1]);
	scared_ghost_tex[2].loadFromFile("sprites/ghosts/s-2.png");
	scared_ghost_sprite[2].setTexture(scared_ghost_tex[2]);
	scared_ghost_tex[3].loadFromFile("sprites/ghosts/s-3.png");
	scared_ghost_sprite[3].setTexture(scared_ghost_tex[3]);

	 // Bind ghost eye textures
	eye_tex[0].loadFromFile("sprites/eyes/up.png");
	eye_sprite[0].setTexture(eye_tex[0]);
	eye_tex[1].loadFromFile("sprites/eyes/right.png");
	eye_sprite[1].setTexture(eye_tex[1]);
	eye_tex[2].loadFromFile("sprites/eyes/down.png");
	eye_sprite[2].setTexture(eye_tex[2]);
	eye_tex[3].loadFromFile("sprites/eyes/left.png");
	eye_sprite[3].setTexture(eye_tex[3]);

	// Bind UI textures
	num_tex[0].loadFromFile("sprites/ui/0.png");
	num_sprite[0].setTexture(num_tex[0]);
	num_tex[1].loadFromFile("sprites/ui/1.png");
	num_sprite[1].setTexture(num_tex[1]);
	num_tex[2].loadFromFile("sprites/ui/2.png");
	num_sprite[2].setTexture(num_tex[2]);
	num_tex[3].loadFromFile("sprites/ui/3.png");
	num_sprite[3].setTexture(num_tex[3]);
	num_tex[4].loadFromFile("sprites/ui/4.png");
	num_sprite[4].setTexture(num_tex[4]);
	num_tex[5].loadFromFile("sprites/ui/5.png");
	num_sprite[5].setTexture(num_tex[5]);
	num_tex[6].loadFromFile("sprites/ui/6.png");
	num_sprite[6].setTexture(num_tex[6]);
	num_tex[7].loadFromFile("sprites/ui/7.png");
	num_sprite[7].setTexture(num_tex[7]);
	num_tex[8].loadFromFile("sprites/ui/8.png");
	num_sprite[8].setTexture(num_tex[8]);
	num_tex[9].loadFromFile("sprites/ui/9.png");
	num_sprite[9].setTexture(num_tex[9]);
	score_200_tex.loadFromFile("sprites/ui/200.png");
	score_200_sprite.setTexture(score_200_tex);
	score_400_tex.loadFromFile("sprites/ui/400.png");
	score_400_sprite.setTexture(score_400_tex);
	score_800_tex.loadFromFile("sprites/ui/800.png");
	score_800_sprite.setTexture(score_800_tex);
	score_1600_tex.loadFromFile("sprites/ui/1600.png");
	score_1600_sprite.setTexture(score_1600_tex);
	ready_tex.loadFromFile("sprites/ui/ready.png");
	ready_sprite.setTexture(ready_tex);
	gameover_tex.loadFromFile("sprites/ui/gameover.png");
	gameover_sprite.setTexture(gameover_tex);
	life_tex.loadFromFile("sprites/ui/life.png");
	life_sprite.setTexture(life_tex);
	score_tex.loadFromFile("sprites/ui/score_tex.png");
	score_sprite.setTexture(score_tex);
	high_tex.loadFromFile("sprites/ui/high.png");
	high_sprite.setTexture(high_tex);
	score_100_tex.loadFromFile("sprites/ui/100.png");
	score_100_sprite.setTexture(score_100_tex);
	score_300_tex.loadFromFile("sprites/ui/300.png");
	score_300_sprite.setTexture(score_300_tex);

	// Fruit textures
	cherry_tex.loadFromFile("sprites/fruits/cherry.png");
	cherry_sprite.setTexture(cherry_tex);
	strawberry_tex.loadFromFile("sprites/fruits/strawberry.png");
	strawberry_sprite.setTexture(strawberry_tex);
}

sf::Sprite Resources::getMazeSprite(){
	return maze_sprite;
}

sf::Sprite Resources::getPacmanSprite(int i){
	return pacman_sprite[i];
}

sf::Sprite Resources::getGhostSprite(char ghost, int i){
	switch(ghost){
	case 'r':
		return red_ghost_sprite[i];
	case 'b':
		return blue_ghost_sprite[i];
	case 'p':
		return pink_ghost_sprite[i];
	default:
		return yellow_ghost_sprite[i];
	}
}

int Resources::getQtdePacmanSprite(){
	return pacman_sprite.size();
}

int Resources::getQtdeGhostSprite(){
	return red_ghost_sprite.size();
}
