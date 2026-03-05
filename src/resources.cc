#include "resources.h"

sf::Texture Resources::maze_tex;
sf::Texture Resources::pill_tex;
sf::Texture Resources::bigPill_tex;

std::array<sf::Texture, 3> Resources::pacman_tex;
std::array<sf::Texture, 11> Resources::dead_pacman_tex;

std::array<sf::Texture, 2> Resources::red_ghost_tex;
std::array<sf::Texture, 2> Resources::pink_ghost_tex;
std::array<sf::Texture, 2> Resources::blue_ghost_tex;
std::array<sf::Texture, 2> Resources::yellow_ghost_tex;
std::array<sf::Texture, 4> Resources::scared_ghost_tex;

std::array<sf::Texture, 4> Resources::eye_tex;

std::array<sf::Texture, 10> Resources::num_tex;
sf::Texture Resources::score_200_tex;
sf::Texture Resources::score_400_tex;
sf::Texture Resources::score_800_tex;
sf::Texture Resources::score_1600_tex;
sf::Texture Resources::ready_tex;
sf::Texture Resources::gameover_tex;
sf::Texture Resources::life_tex;
sf::Texture Resources::score_tex;
sf::Texture Resources::high_tex;
sf::Texture Resources::score_100_tex;
sf::Texture Resources::score_300_tex;

sf::Texture Resources::cherry_tex;
sf::Texture Resources::strawberry_tex;

Resources::Resources(){
}

Resources::~Resources(){
}

void Resources::load_and_bind_textures(){
	// Bind map textures
	maze_tex.loadFromFile("sprites/maze/maze.png");
	pill_tex.loadFromFile("sprites/maze/p-0.png");
	bigPill_tex.loadFromFile("sprites/maze/p-1.png");

	// Bind Pacman textures
	pacman_tex[0].loadFromFile("sprites/pacman/0.png");
	pacman_tex[1].loadFromFile("sprites/pacman/1.png");
	pacman_tex[2].loadFromFile("sprites/pacman/2.png");
	dead_pacman_tex[0].loadFromFile("sprites/pacman/d-0.png");
	dead_pacman_tex[1].loadFromFile("sprites/pacman/d-1.png");
	dead_pacman_tex[2].loadFromFile("sprites/pacman/d-2.png");
	dead_pacman_tex[3].loadFromFile("sprites/pacman/d-3.png");
	dead_pacman_tex[4].loadFromFile("sprites/pacman/d-4.png");
	dead_pacman_tex[5].loadFromFile("sprites/pacman/d-5.png");
	dead_pacman_tex[6].loadFromFile("sprites/pacman/d-6.png");
	dead_pacman_tex[7].loadFromFile("sprites/pacman/d-7.png");
	dead_pacman_tex[8].loadFromFile("sprites/pacman/d-8.png");
	dead_pacman_tex[9].loadFromFile("sprites/pacman/d-9.png");
	dead_pacman_tex[10].loadFromFile("sprites/pacman/d-10.png");

	// Bind ghost textures
	red_ghost_tex[0].loadFromFile("sprites/ghosts/r-0.png");
	red_ghost_tex[1].loadFromFile("sprites/ghosts/r-1.png");
	pink_ghost_tex[0].loadFromFile("sprites/ghosts/p-0.png");
	pink_ghost_tex[1].loadFromFile("sprites/ghosts/p-1.png");
	blue_ghost_tex[0].loadFromFile("sprites/ghosts/b-0.png");
	blue_ghost_tex[1].loadFromFile("sprites/ghosts/b-1.png");
	yellow_ghost_tex[0].loadFromFile("sprites/ghosts/y-0.png");
	yellow_ghost_tex[1].loadFromFile("sprites/ghosts/y-1.png");
	scared_ghost_tex[0].loadFromFile("sprites/ghosts/s-0.png");
	scared_ghost_tex[1].loadFromFile("sprites/ghosts/s-1.png");
	scared_ghost_tex[2].loadFromFile("sprites/ghosts/s-2.png");
	scared_ghost_tex[3].loadFromFile("sprites/ghosts/s-3.png");

	// Bind ghost eye textures
	eye_tex[0].loadFromFile("sprites/eyes/up.png");
	eye_tex[1].loadFromFile("sprites/eyes/right.png");
	eye_tex[2].loadFromFile("sprites/eyes/down.png");
	eye_tex[3].loadFromFile("sprites/eyes/left.png");

	// Bind UI textures
	num_tex[0].loadFromFile("sprites/ui/0.png");
	num_tex[1].loadFromFile("sprites/ui/1.png");
	num_tex[2].loadFromFile("sprites/ui/2.png");
	num_tex[3].loadFromFile("sprites/ui/3.png");
	num_tex[4].loadFromFile("sprites/ui/4.png");
	num_tex[5].loadFromFile("sprites/ui/5.png");
	num_tex[6].loadFromFile("sprites/ui/6.png");
	num_tex[7].loadFromFile("sprites/ui/7.png");
	num_tex[8].loadFromFile("sprites/ui/8.png");
	num_tex[9].loadFromFile("sprites/ui/9.png");
	score_200_tex.loadFromFile("sprites/ui/200.png");
	score_400_tex.loadFromFile("sprites/ui/400.png");
	score_800_tex.loadFromFile("sprites/ui/800.png");
	score_1600_tex.loadFromFile("sprites/ui/1600.png");
	ready_tex.loadFromFile("sprites/ui/ready.png");
	gameover_tex.loadFromFile("sprites/ui/gameover.png");
	life_tex.loadFromFile("sprites/ui/life.png");
	score_tex.loadFromFile("sprites/ui/score_tex.png");
	high_tex.loadFromFile("sprites/ui/high.png");
	score_100_tex.loadFromFile("sprites/ui/100.png");
	score_300_tex.loadFromFile("sprites/ui/300.png");

	// Fruit textures
	cherry_tex.loadFromFile("sprites/fruits/cherry.png");
	strawberry_tex.loadFromFile("sprites/fruits/strawberry.png");
}

sf::Sprite Resources::getMazeSprite(){
	return sf::Sprite(maze_tex);
}

sf::Sprite Resources::getPacmanSprite(int i){
	// pacman_tex has 3 entries but pacman_sprite was 4 (index 3 reused tex[1])
	int texIdx = (i == 3) ? 1 : i;
	return sf::Sprite(pacman_tex[texIdx]);
}

sf::Sprite Resources::getGhostSprite(char ghost, int i){
	switch(ghost){
	case 'r':
		return sf::Sprite(red_ghost_tex[i]);
	case 'b':
		return sf::Sprite(blue_ghost_tex[i]);
	case 'p':
		return sf::Sprite(pink_ghost_tex[i]);
	default:
		return sf::Sprite(yellow_ghost_tex[i]);
	}
}

int Resources::getQtdePacmanSprite(){
	// 4 animation frames (0,1,2,3 where 3 mirrors 1)
	return 4;
}

int Resources::getQtdeGhostSprite(){
	return (int)red_ghost_tex.size();
}
