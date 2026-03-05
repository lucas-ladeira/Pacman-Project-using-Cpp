#ifndef RESOURCES_H
#define RESOURCES_H

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
	static sf::Texture pill_tex;
	static sf::Texture bigPill_tex;

	// Pacman Textures
	static std::array<sf::Texture, 3> pacman_tex;
	static std::array<sf::Texture, 11> dead_pacman_tex;

	// Ghost Textures
	static std::array<sf::Texture, 2> red_ghost_tex;
	static std::array<sf::Texture, 2> pink_ghost_tex;
	static std::array<sf::Texture, 2> blue_ghost_tex;
	static std::array<sf::Texture, 2> yellow_ghost_tex;
	static std::array<sf::Texture, 4> scared_ghost_tex;

	// Eye Textures
	static std::array<sf::Texture, 4> eye_tex;

	// UI Textures
	static std::array<sf::Texture, 10> num_tex;
	static sf::Texture score_200_tex;
	static sf::Texture score_400_tex;
	static sf::Texture score_800_tex;
	static sf::Texture score_1600_tex;
	static sf::Texture ready_tex;
	static sf::Texture gameover_tex;
	static sf::Texture life_tex;
	static sf::Texture score_tex;
	static sf::Texture high_tex;
	static sf::Texture score_100_tex;
	static sf::Texture score_300_tex;

	// Fruit Textures
	static sf::Texture cherry_tex;
	static sf::Texture strawberry_tex;
};

#endif