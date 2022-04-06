//Name: Síne Whooley
//Student Number: C00271403
//Date: 25/02/22 Restart Date: 22/03/22
//---------------------
// Project: Final Project "Pot of Luck"
//---------------------

#pragma once

#ifndef GAME_HPP
#define GAME_HPP
/// <summary>
/// include guards used so we don't process this file twice
/// same as #pragma once
/// Don't forget the endif at the bottom
/// </summary>

#include <SFML/Graphics.hpp>
#include <fstream>
#include "Character.h"
#include "EnemyA.h"
#include "EnemyB.h"
#include "Arrow.h"
#include "Open-Screen.h"

const float PLAYER = 1;
const float PLAYER_WIDTH = 20.0f;
static float screenWidth = 1200;
static float screenHeight = 800;

class EnemyA;
class EnemyB;
class Character;
class Player;
class Arrow;


class Game
{
public:
	Game();
	~Game();
	/// <summary>
	/// main method for game
	/// </summary>
	void run();

private:

	//---------------------------
	// Declarations
	// All void as they dont need to return anything
	//---------------------------
	void processEvents();
	void processKeys(sf::Event t_event);

	void update(sf::Time t_deltaTime);
	void render();
	
	void setupLives();

	//void checkBoundary(sf::Vector2f t_position, sf::Vector2f &t_velocity);
	void setupBackground();
	void setupBushes();
	void setupPotOfCrystals();
	//void setupCharacterSpeed();
	//void collisionDetection();

	//Player
	Character m_bodyOfCharacter;				//Sets up the object m_player from the Player class
	int m_speed;
	//sf::Vector2f m_position;
	//sf::Vector2f m_velocity;

	Arrow m_fireArrow;

	//Enemy A (Stationary Enemy)
	EnemyA m_stationaryEnemyA;		//Sets up the object m_stationaryEnemy from the EnemyA class
	EnemyA m_stationaryEnemyB;
	EnemyA m_stationaryEnemyC;

	//Enemy B (Moving Enemy)
	EnemyB m_movingEnemy;

	//------------------------------
	// Member variables
	// Using m_ for all member variables
	//------------------------------

	sf::RenderWindow m_window;						// main SFML window
	sf::Font m_ArialBlackfont;						// font used by message
	sf::Text m_scoreText;							// Text for displaying scores

	
	//sf::Texture m_logoTexture;					// texture used for sfml logo
	//sf::Sprite m_logoSprite;						// sprite used for sfml logo
	bool m_exitGame;								// control exiting game

	//Scoring 
	//sf::Vector2f m_scoreLocation;					//Score Location					

	//Background 
	sf::Sprite m_backgroundSprite;
	sf::Texture m_backgroungTexture;

	//Bushes
	sf::Sprite m_bushSpriteA;
	sf::Sprite m_bushSpriteB;
	sf::Sprite m_bushSpriteC;
	sf::Sprite m_bushSpriteD;
	sf::Sprite m_bushSpriteE;
	sf::Sprite m_bushSpriteF;
	sf::Sprite m_bushSpriteG;
	sf::Sprite m_bushSpriteH;
	sf::Texture m_bushTextureHorizontal;
	sf::Texture m_bushTextureVertical;

	//Pot of Crystals
	sf::Sprite m_potOfCrystalsSprite;
	sf::Texture m_potOfCrystalsTexture;
};

#endif // !GAME_HPP

