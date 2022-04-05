//Name: Síne Whooley
//Student Number: C00271403
//Date: 25/02/22 Restart Date: 22/03/22
//---------------------
// Project: Final Project "Pot of Luck"
//---------------------
#pragma once

#include "Game.h"
#include <iostream>
#include <fstream>

//const float SCREEN_WIDTH = 1200.0f;
//const float SCREEN_HEIGHT = 800.0f;

class Player
{
public:
	Player();
	~Player();

	bool m_isAlive = true;			//Boolean to see if player is alive
	int x = 0;						//Player X Co-ordinate / Position
	int y = 0;						//Player Y Co-ordinate / Position
	sf::Sprite m_playerBody;

	//
	void setBody();
	sf::Sprite getBody();



	//Player Movement
	//void moveUp();
	//void moveDown();
	//void moveLeft();
	//void moveRight();


private:


	//------------------
	// Member variables
	// Using m_ for all member variables
	//------------------
	sf::Texture m_playerTexture;
	sf::Sprite m_playerSprite;

	sf::Vector2f m_position;
	sf::Vector2f m_velocity;

	//int m_lives;					//Player Lives
	//float m_speed;				//Player Speed 

	//bool m_fireAtEnemy{ true }; 					// Player allowed to fire at Enemy
	//bool m_aimAtEnemy{ false };					// Player aiming at Enemy, 

};


