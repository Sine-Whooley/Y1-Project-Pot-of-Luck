
///Name: Síne Whooley
//Student Number: C00271403
//Date: 25/02/22 Restart Date: 22/03/22
//---------------------
// Project: Final Project "Pot of Luck"
//---------------------

#include "Character.h"
#include <SFML/Graphics.hpp>

Character::Character()
{
	setCharacterBody();
	setPosition();
	moveCharacter();
	//getSpeed();
}

Character::~Character()
{
}

void Character::setPosition()
{
	m_bodyCharacter.setPosition(600.0f, 200.0f);
}

void Character::setCharacterBody()
{
	sf::Vector2f sizeVec(40, 100);

	m_bodyCharacter.setSize(sizeVec);
	m_bodyCharacter.setFillColor(sf::Color::Black);
}

//void Character::setSpeed(int m_newSpeed)
//{
//	m_speed = m_newSpeed;
//}

//int Character::getSpeed()
//{
//	return m_speed;
//}

void Character::moveCharacter()
{
	//Character movement
	moveCharacterUp();
	moveCharacterDown();
	moveCharacterLeft();
	moveCharacterRight();
}

void Character::moveCharacterUp()
{
	sf::Vector2f pos(m_bodyCharacter.getPosition());
	pos.y--;
	m_bodyCharacter.setPosition(pos);

	if (pos.y == WINDOW_TOP - 25)
	{
		sf::Vector2f pos(m_bodyCharacter.getPosition());
		pos.y = WINDOW_BOTTOM;
		m_bodyCharacter.setPosition(pos);
	}
}

void Character::moveCharacterDown()
{
	sf::Vector2f pos(m_bodyCharacter.getPosition());
	pos.y++;
	m_bodyCharacter.setPosition(pos);
	
	if (pos.y == WINDOW_BOTTOM)
	{
		sf::Vector2f pos(m_bodyCharacter.getPosition());
		pos.y = WINDOW_TOP - 25;
		m_bodyCharacter.setPosition(pos);
	}
}

void Character::moveCharacterLeft()
{
	sf::Vector2f pos(m_bodyCharacter.getPosition());
	pos.x--;
	m_bodyCharacter.setPosition(pos);

	if (pos.x == WINDOW_LEFT - 25)
	{
		sf::Vector2f pos(m_bodyCharacter.getPosition());
		pos.x = WINDOW_RIGHT;
		m_bodyCharacter.setPosition(pos);
	}
}

void Character::moveCharacterRight()
{
	sf::Vector2f pos(m_bodyCharacter.getPosition());
	pos.x++;
	m_bodyCharacter.setPosition(pos);


	if (pos.x == WINDOW_RIGHT)
	{
		sf::Vector2f pos(m_bodyCharacter.getPosition());
		pos.x = WINDOW_LEFT - 25;
		m_bodyCharacter.setPosition(pos);
	}
}


sf::RectangleShape Character::getCharacterBody()
{
	return m_bodyCharacter;
}
