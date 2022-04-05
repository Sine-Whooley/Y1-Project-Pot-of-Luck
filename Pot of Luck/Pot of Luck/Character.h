///Name: Síne Whooley
//Student Number: C00271403
//Date: 25/02/22 Restart Date: 22/03/22
//---------------------
// Project: Final Project "Pot of Luck"
//---------------------

#pragma once
#include <SFML/Graphics.hpp>

class Character
{
public:

	Character();
	~Character();

	bool m_isAlive = true;				//Boolean to see if player is alive
	//float m_speed = 10.0f;					//Character Speed

	void setPosition();
	void setCharacterBody();

	//Character Speed
	//void setSpeed(int m_newSpeed);
	//int getSpeed();

	//Moving Player/Character
	void moveCharacter();
	void moveCharacterUp();
	void moveCharacterDown();
	void moveCharacterLeft();
	void moveCharacterRight();

	//void setEAPosition();
	sf::RectangleShape getCharacterBody();


private:
	sf::RectangleShape m_bodyCharacter;

	const int WINDOW_TOP = 0;
	const int WINDOW_BOTTOM = 800;
	const int WINDOW_LEFT = 0;
	const int WINDOW_RIGHT = 1200;


};
