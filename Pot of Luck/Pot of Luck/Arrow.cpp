///Name: Síne Whooley
//Student Number: C00271403
//Date: 25/02/22 Restart Date: 22/03/22
//---------------------
// Project: Final Project "Pot of Luck"
//---------------------

#include "Arrow.h"
Arrow::Arrow()
{
	setBody();
}
 
Arrow::~Arrow()
{
}


sf::RectangleShape Arrow::getArrowBody()
{
	return m_arrow;
}

void Arrow::setBody()
{
	sf::Vector2f sizeVec(5, 5);
	m_arrow.setSize(sizeVec);

	m_arrow.setFillColor(sf::Color::Black);
	m_arrow.setPosition(2, 2);
}

void Arrow::fireRight()
{
	sf::Vector2f pos(m_arrow.getPosition());
	pos.x++;
	m_arrow.setPosition(pos);

}

void Arrow::fireLeft()
{
	sf::Vector2f pos(m_arrow.getPosition());
	pos.x--;
	m_arrow.setPosition(pos);

}

void Arrow::fireUp()
{
	sf::Vector2f pos(m_arrow.getPosition());
	pos.y--;
	m_arrow.setPosition(pos);

}

void Arrow::fireDown()
{
	sf::Vector2f pos(m_arrow.getPosition());
	pos.y++;
	m_arrow.setPosition(pos);

}
