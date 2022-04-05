///Name: Síne Whooley
//Student Number: C00271403
//Date: 25/02/22 Restart Date: 22/03/22
//---------------------
// Project: Final Project "Pot of Luck"
//---------------------

#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

class EnemyB
{
public:
	EnemyB();
	~EnemyB();

	void setEBBody();
	sf::RectangleShape getBodyEB();

private:
	sf::RectangleShape m_enemyBody;
};


