///Name: Síne Whooley
//Student Number: C00271403
//Date: 25/02/22 Restart Date: 22/03/22
//---------------------
// Project: Final Project "Pot of Luck"
//---------------------

#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>


//Arrow class declaration
class Arrow
{
public:
	Arrow();
	~Arrow();

	sf::RectangleShape getArrowBody();
	int arrowA;
	int arrowPoint;
	float arrowsPerSecond;
	float shotDelay;
	
	void setBody();


	void fireRight();				//function to fire the arrow right
	void fireLeft();				//function to fire the arrow left
	void fireUp();					//function to fire the arrow up
	void fireDown();				//function to fire the arrow down

private:
	sf::RectangleShape m_arrow;
	float m_speedOfArrow = 10.0f;
	bool m_isAlive = false;
	float m_arrowCounter;

	const int SCREEN_TOP = 0;
	const int SCREEN_BOTTOM = 1200;
	const int SCREEN_LEFT = 0;
	const int SCREEN_RIGHT = 800;
};

