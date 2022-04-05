///Name: Síne Whooley
//Student Number: C00271403
//Date: 25/02/22 Restart Date: 22/03/22
//---------------------
// Project: Final Project "Pot of Luck"
//---------------------

#pragma once

#include <SFML/Graphics.hpp>

class EnemyA
{
public:
	EnemyA();
	~EnemyA();

	//void setEAPosition();
	void setEABody();
	sf::RectangleShape getBodyA();
	sf::RectangleShape getBodyB();
	sf::RectangleShape getBodyC();

private:
	sf::RectangleShape m_bodyEnemyA;
	sf::RectangleShape m_bodyEnemyB;
	sf::RectangleShape m_bodyEnemyC;

};
