///Name: Síne Whooley
//Student Number: C00271403
//Date: 25/02/22 Restart Date: 22/03/22
//---------------------
// Project: Final Project "Pot of Luck"
//---------------------

#include "EnemyA.h"
#include <SFML/Graphics.hpp>
using namespace std;

EnemyA::EnemyA()
{
	setEABody();

}

EnemyA::~EnemyA()
{
}

void EnemyA::setEABody()
{
	sf::Vector2f sizeVec(40, 100);

	m_bodyEnemyA.setSize(sizeVec);
	m_bodyEnemyA.setPosition(100.0f, 240.0f);
	m_bodyEnemyA.setFillColor(sf::Color::Red);

	m_bodyEnemyB.setSize(sizeVec);
	m_bodyEnemyB.setPosition(100.0f, 525.0f);
	m_bodyEnemyB.setFillColor(sf::Color::Red);

	m_bodyEnemyC.setSize(sizeVec);
	m_bodyEnemyC.setPosition(975.0f, 400.0f);
	m_bodyEnemyC.setFillColor(sf::Color::Red);
}

sf::RectangleShape EnemyA::getBodyA()
{
	return m_bodyEnemyA;

}

sf::RectangleShape EnemyA::getBodyB()
{
	return m_bodyEnemyB;
}

sf::RectangleShape EnemyA::getBodyC()
{
	return m_bodyEnemyC;
}
