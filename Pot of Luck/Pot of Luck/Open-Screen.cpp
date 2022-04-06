// Name: Síne Whooley
// Student Number: C00271403
// Date: 25/02/22 Restart Date: 22/03/22
// ---------------------
// Project: Final Project "Pot of Luck"
// ---------------------

#include <SFML/Graphics.hpp>
#include "Open-Screen.h"
#include "Game.h"
#include <iostream>

using namespace std;

Open_Screen::Open_Screen()
{

}

Open_Screen::~Open_Screen()
{
}

void Open_Screen::initialise(sf::Font& t_font)
{
	m_font = t_font;

	if (!m_openScreenTexture.loadFromFile("ASSETS\\IMAGES\\main-menu.png"))
	{
		cout << "Error with Open Screen" << endl;
	}
	m_openScreenSprite.setTexture(m_openScreenTexture);
	m_openScreenSprite.setTextureRect(sf::IntRect(0, 0, static_cast<int>(1200), static_cast<int>(800)));
	m_openScreenSprite.setPosition(0, 0);
	m_openScreenTexture.setRepeated(true);

	sf::FloatRect textSize = m_message.getGlobalBounds();
	float xposition = 1200 / 2 - textSize.width / 2;

	m_message.setFont(m_font);
	m_message.setString("Press Space to Continu");
	m_message.setStyle(sf::Text::Bold);
	m_message.setCharacterSize(35);
	m_message.setPosition(xposition, 800 * 0.75f);

	m_proceedKeyPressed = false;
	
}

void Open_Screen::render(sf::RenderWindow& m_window)
{
	m_window.draw(m_openScreenSprite);
	m_window.draw(m_message);
}

void Open_Screen::update(sf::Time)
{
	if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left))
	{
		m_proceedKeyPressed = true;
	}
	m_proceedKeyPressed = false;

}

void Open_Screen::processEvent(sf::Event t_event)
{
	if (t_event.type == sf::Event::KeyPressed)
	{
		if (t_event.key.code == sf::Keyboard::Space)
		{
			m_proceedKeyPressed = true;
		}
	}
}


