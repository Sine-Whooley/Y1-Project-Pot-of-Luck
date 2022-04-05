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

	//void getArrowBody();
	

private:
	sf::RectangleShape m_arrow;
	float m_speed = 10.0f;
};

