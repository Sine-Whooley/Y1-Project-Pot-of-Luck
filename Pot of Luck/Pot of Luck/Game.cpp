//Name: Síne Whooley
//Student Number: C00271403
//Date: 25/02/22 Restart Date: 22/03/22
//---------------------
// Project: Final Project "Pot of Luck"
//---------------------

#include <SFML/Graphics.hpp>
#include "Game.h"
#include "Player.h"
#include <iostream>

using namespace std;

//Default Constructor
Game::Game() :
	m_window{ sf::VideoMode{ 1200U, 800U, 32U }, "Pot of Luck" },
	m_exitGame{false}													//when true game will exit
{
	setupBackground(); 
	setupBushes();
	setupPotOfCrystals();
	setupLives();

}

//Overloaded Constructor
Game::~Game()
{
}



// Main Game Loop
// Update 60 times per second,
// Process update at least 60 times per second
// Draw as often as possible but only updates are on time
// If updates run slow then don't render frames
void Game::run()
{	
	sf::Clock clock;
	sf::Time timeSinceLastUpdate = sf::Time::Zero;
	const float fps{ 60.0f };
	sf::Time timePerFrame = sf::seconds(1.0f / fps); // 60 fps
	while (m_window.isOpen())
	{
		processEvents();									//As many as possible
		timeSinceLastUpdate += clock.restart();
		while (timeSinceLastUpdate > timePerFrame)
		{
			timeSinceLastUpdate -= timePerFrame;
			processEvents();								//At least 60 fps
			update(timePerFrame);							//60 fps
		}
		render();											//As many as possible
	}
}


// Handle user and system events/ input
// Get key presses/ mouse moves etc. from OS
// and user :: Don't do game update here
void Game::processEvents()
{
	sf::Event newEvent;
	while (m_window.pollEvent(newEvent))
	{
		if ( sf::Event::Closed == newEvent.type)					//Window message
		{
			m_exitGame = true;
		}
		if (sf::Event::KeyPressed == newEvent.type)					//User pressed a key
		{
			processKeys(newEvent);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		{
			m_bodyOfCharacter.moveCharacterUp();
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		{
			m_bodyOfCharacter.moveCharacterDown();
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		{
			m_bodyOfCharacter.moveCharacterLeft();
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		{
			m_bodyOfCharacter.moveCharacterRight();
		}
	}
}


// Deal with key presses from the user
void Game::processKeys(sf::Event t_event)
{
	if (sf::Keyboard::Escape == t_event.key.code)
	{
		m_exitGame = true;
	}
}


//Update the game world
void Game::update(sf::Time t_deltaTime)
{
	if (m_exitGame)
	{
		m_window.close();
	}
}


// Draw the frame and then switch buffers
void Game::render()
{
	//Display 
	//-----------------------------

	//Background 
	m_window.draw(m_backgroundSprite);
	
	//Bushes 
	m_window.draw(m_bushSpriteA);
	m_window.draw(m_bushSpriteB);
	m_window.draw(m_bushSpriteC);
	m_window.draw(m_bushSpriteD);
	m_window.draw(m_bushSpriteE);
	m_window.draw(m_bushSpriteF);
	m_window.draw(m_bushSpriteG);
	m_window.draw(m_bushSpriteH);

	//Pot of Crystals
	m_window.draw(m_potOfCrystalsSprite);
	
	//Character
	m_window.draw(m_bodyOfCharacter.getCharacterBody());

	//Arrow
	m_window.draw(m_fireArrow.getArrowBody());

	//EnemyA
	m_window.draw(m_stationaryEnemyA.getBodyA());
	m_window.draw(m_stationaryEnemyB.getBodyB());
	m_window.draw(m_stationaryEnemyC.getBodyC());

	//Enemy B
	m_window.draw(m_movingEnemy.getBodyEB());
	
	//Score
	m_window.draw(m_scoreText);

	//Window
	m_window.display();
}


//Load the font and setup the text message for screen
void Game::setupLives()
{
	if (!m_ArialBlackfont.loadFromFile("ASSETS\\FONTS\\Antonio-Regular.ttf"))
	{
		cout << "Problem loading Font" << endl;
	}
	m_scoreText.setFont(m_ArialBlackfont);
	m_scoreText.setString("Lives: ");
	m_scoreText.setStyle(sf::Text::Italic | sf::Text::Bold);
	m_scoreText.setPosition(50.0f, 30.0f);
	m_scoreText.setCharacterSize(60U);
	m_scoreText.setOutlineColor(sf::Color::Cyan);
	m_scoreText.setFillColor(sf::Color::Black);
	m_scoreText.setOutlineThickness(5.0f);

}


//Setting up Background Sprite
void Game::setupBackground()
{
	if (!m_backgroungTexture.loadFromFile("ASSETS\\IMAGES//Game_Background_Brown.png"))
	{
		cout << "Problem loading Background" << endl;
	}

	m_backgroundSprite.setPosition(0.0f, 0.0f);
	m_backgroundSprite.setScale(0.5, 0.5);
	m_backgroundSprite.setTexture(m_backgroungTexture);
}


//Setting up Bush Sprites
void Game::setupBushes()
{
	
	if (!m_bushTextureHorizontal.loadFromFile("ASSETS\\IMAGES\\Bush.png"))
	{
		cout << "Problem loading Bushes" << endl;
	}

	if (!m_bushTextureVertical.loadFromFile("ASSETS\\IMAGES\\Bush-Vertical.png"))
	{
		cout << "Problem loading Bushes" << endl;
	}

	m_bushSpriteA.setScale(0.9, 0.9);							//Bush Size
	m_bushSpriteA.setPosition(50.0f, 125.0f);					//Bush Position
	m_bushSpriteA.setTexture(m_bushTextureHorizontal);			//Bush Texture

	m_bushSpriteB.setScale(0.9, 0.9);					
	m_bushSpriteB.setPosition(50.0f, 375.0f);
	m_bushSpriteB.setTexture(m_bushTextureHorizontal);

	m_bushSpriteC.setScale(0.9, 0.9);					
	m_bushSpriteC.setPosition(50.0f, 625.0f);
	m_bushSpriteC.setTexture(m_bushTextureHorizontal);

	m_bushSpriteD.setScale(0.9, 0.9);					
	m_bushSpriteD.setPosition(950.0f, 275.0f);
	m_bushSpriteD.setTexture(m_bushTextureHorizontal);

	m_bushSpriteE.setScale(0.9, 0.9);					
	m_bushSpriteE.setPosition(950.0f, 525.0f);
	m_bushSpriteE.setTexture(m_bushTextureHorizontal);

	m_bushSpriteF.setScale(0.9, 0.9);
	m_bushSpriteF.setPosition(250.0f, 200.0f);
	m_bushSpriteF.setTexture(m_bushTextureVertical);

	m_bushSpriteG.setScale(0.9, 0.9);
	m_bushSpriteG.setPosition(250.0f, 475.0f);
	m_bushSpriteG.setTexture(m_bushTextureVertical);

	m_bushSpriteH.setScale(0.9, 0.9);
	m_bushSpriteH.setPosition(850.0f, 350.0f);
	m_bushSpriteH.setTexture(m_bushTextureVertical);
}


//Set up Pot of Crystals Sprite
void Game::setupPotOfCrystals()
{
	if (!m_potOfCrystalsTexture.loadFromFile("ASSETS\\IMAGES\\pot_of_crystals.png"))
	{
		cout << "Problem loading Bushes" << endl;
	}

	m_potOfCrystalsSprite.setScale(0.3, 0.3);
	m_potOfCrystalsSprite.setPosition(400.0f, 50.0f);
	m_potOfCrystalsSprite.setTexture(m_potOfCrystalsTexture);
}













