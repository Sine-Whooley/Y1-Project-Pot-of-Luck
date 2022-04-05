#include "EnemyB.h"

EnemyB::EnemyB()
{
	setEBBody();
}

EnemyB::~EnemyB()
{
}

void EnemyB::setEBBody()
{
	sf::Vector2f sizeVec(40, 100);

	m_enemyBody.setSize(sizeVec);
	m_enemyBody.setPosition(600.0f, 650.0f);
	m_enemyBody.setFillColor(sf::Color::Cyan);
}

sf::RectangleShape EnemyB::getBodyEB()
{
	return m_enemyBody;
}
