#ifndef RESOURCES_H
#define RESOURCES_H

#include <png.h>
#include <SFML/Graphics.hpp>
#include <array>

class Resources{
public:
	Resources();
	~Resources();
	
	void load_and_bind_textures();

	static sf::Sprite getMazeSprite();
	static sf::Sprite getPacmanSprite(int i);
	static sf::Sprite getGhostSprite(char ghost, int i);

	static int getQtdePacmanSprite();
	static int getQtdeGhostSprite();

private:
	// Maze Textures
	static sf::Texture maze_tex;
	static sf::Sprite maze_sprite;
	static sf::Texture pill_tex;
	static sf::Sprite pill_sprite;
	static sf::Texture bigPill_tex;
	static sf::Sprite bigPill_sprite;

	// Pacman Textures
	static std::array<sf::Texture, 3> pacman_tex;
	static std::array<sf::Sprite, 4> pacman_sprite;
	static std::array<sf::Texture, 11> dead_pacman_tex;
	static std::array<sf::Sprite, 11> dead_pacman_sprite;

	// Ghost Textures
	static std::array<sf::Texture, 2> red_ghost_tex;
	static std::array<sf::Sprite, 2> red_ghost_sprite;
	static std::array<sf::Texture, 2> pink_ghost_tex;
	static std::array<sf::Sprite, 2> pink_ghost_sprite;
	static std::array<sf::Texture, 2> blue_ghost_tex;
	static std::array<sf::Sprite, 2> blue_ghost_sprite;
	static std::array<sf::Texture, 2> yellow_ghost_tex;
	static std::array<sf::Sprite, 2> yellow_ghost_sprite;
	static std::array<sf::Texture, 4> scared_ghost_tex;
	static std::array<sf::Sprite, 4> scared_ghost_sprite;

	// Eye Textures
	static std::array<sf::Texture, 4> eye_tex;
	static std::array<sf::Sprite, 4> eye_sprite;

	// UI Textures
	static std::array<sf::Texture, 10> num_tex;
	static std::array<sf::Sprite, 10> num_sprite;
	static sf::Texture score_200_tex;
	static sf::Sprite score_200_sprite;
	static sf::Texture score_400_tex;
	static sf::Sprite score_400_sprite;
	static sf::Texture score_800_tex;
	static sf::Sprite score_800_sprite;
	static sf::Texture score_1600_tex;
	static sf::Sprite score_1600_sprite;
	static sf::Texture ready_tex;
	static sf::Sprite ready_sprite;
	static sf::Texture gameover_tex;
	static sf::Sprite gameover_sprite;
	static sf::Texture life_tex;
	static sf::Sprite life_sprite;
	static sf::Texture score_tex;
	static sf::Sprite score_sprite;
	static sf::Texture high_tex;
	static sf::Sprite high_sprite;
	static sf::Texture score_100_tex;
	static sf::Sprite score_100_sprite;
	static sf::Texture score_300_tex;
	static sf::Sprite score_300_sprite;

	// Fruit Textures
	static sf::Texture cherry_tex;
	static sf::Sprite cherry_sprite;
	static sf::Texture strawberry_tex;
	static sf::Sprite strawberry_sprite;
};

#endif