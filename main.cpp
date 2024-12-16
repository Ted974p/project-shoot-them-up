#include "pch.h"
#include "main.h"
#include <SFML/Graphics.hpp>
#include "Player.h"
#include <iostream>
#include "Vector2.h"
#include "Entity.h"
#include "GameManager.h"


int main()
{
	GameManager play;
	play.Menu();
	
}
/*	bool test = false;
	sf::Vector2f(5.f, 4.F);
	sf::RenderWindow window(sf::VideoMode(800, 600), "exercice 1");
	Player player;
	sf::Texture texture;
	if (!texture.loadFromFile("assets/tile_0018.png", sf::IntRect(0, 0, 80, 80)))
	{
		// error...
	}
	sf::Sprite sprite;
	sprite.setTexture(texture);
	player.draw(window,);
	
	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();



		}


		window.clear(sf::Color::Black);
		window.display();
		
	}*/
/*	int  characterx = 400;
	int charactery = 300;
	srand(time(0));

	 int Windowx = 800;
	 int Windowy = 600;

	int randomx = rand() % 700;
	int randomy = rand() % 500;

	std::cout << randomx << " " << randomy;

	sf::RenderWindow window(sf::VideoMode(Windowx, Windowy), "exercice 1");
	sf::View view(sf::FloatRect(200.f, 200.f, 800.f, 600.f));
	sf::CircleShape circle(50);
	circle.setPosition(randomx, randomy);
	circle.setFillColor(sf::Color(100, 250, 50));

	
	sf::Font font;
	if (!font.loadFromFile("assets/arial.ttf"))
	{
		// error...
	}
	

	sf::Texture texture;
	if (!texture.loadFromFile("assets/tile_0018.png", sf::IntRect(0, 0 ,80, 80)))
	{
		// error...
	}

	sf::Sprite sprite;
	sprite.setTexture(texture);
	sprite.setScale(5, 5);
	sprite.setPosition(characterx, charactery);

	std::cout << randomx << " " << randomy;
	sf::Text text;
	text.setFont(font);
	text.setString("Texte");
	text.setPosition(700, 1);
	text.setCharacterSize(24);
	text.setFillColor(sf::Color::Red);

	

	while (window.isOpen()) {
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		{
			if (charactery -1 > 0)
			{
				charactery -= 1;
				sprite.setPosition(characterx, charactery);
			}
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))

		{
			if (charactery +1 < 560)
			{
				charactery += 1;
				sprite.setPosition(characterx, charactery);
			}
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		{
			if (characterx +1 < 760)
			{
				characterx += 1;
				sprite.setPosition(characterx, charactery);
			}
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))

		{
			if (characterx -1 > 0)
			{
				characterx -= 1;
				sprite.setPosition(characterx, charactery);
			}
		}
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();



		}
		
		window.clear(sf::Color::Black);

		window.draw(circle);
		window.draw(text);
		window.draw(sprite);
		window.display();
		
	}
*/