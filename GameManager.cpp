#include "pch.h"
#include "GameManager.h"
#include "Entity.h"


GameManager::GameManager()
{

}

void GameManager::Menu()
{
	bool play = false;
	bool Boucle = false;
	std::cout << "test" << std::endl;
	sf::RenderWindow window(sf::VideoMode(800, 600), "shootthemup");
	while (window.isOpen())
	{

		while (Boucle == false)
		{
			window.clear(sf::Color::Black);
			window.display();
			

			sf::Event event;
			while (window.pollEvent(event)) {
				if (event.type == sf::Event::Closed)
					window.close();
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
				{
					play = true;
					Boucle = true;
					std::cout << "test" << std::endl;

				}
			}
			
		}
		if (play == true)
			Level1();


		if (play == false)
			return;

	
	}
}
	

void GameManager::Level1()
{
	char moove;
	bool Play = true;
	bool Level = true;




		Projectile* projectile[20];
		Player* player = new Player;
		player->Set(0, 0);
		int projectileNumber = 20;
		int const MobsNumber = 10;
		Ennemi* Mobs[MobsNumber];
		/*draw scene 1*/
	
			for (int x = 0; x < MobsNumber; x++)
			{
				
				Mobs[x] = initiateMobs(MobsNumber, x);
			}
			bool waves1 = false;
			bool waves2 = false;
			bool waves3 = false;

			sf::RenderWindow window(sf::VideoMode(800, 600), "shoot them up");
			while (window.isOpen()) 
			{

				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
				{

					std::cout << "test" << std::endl;
					if (projectileNumber < 0)
					{
						projectileNumber = 20;
					}
					projectile[projectileNumber] = new PlayerProjectile;
					projectile[projectileNumber]->Set(player->GetAtk(), player->Getx(), player->Gety(), player->Ally());
					projectileNumber--;

				}
					/*faire avancer la scene1*/
					/*moove == getch();
					if (isKeyPressed(sf::Keyboard::Escape))||isKeyPressed(sf::Keyboard::Escape)) || isKeyPressed(sf::Keyboard::Escape)) || isKeyPressed(sf::Keyboard::Escape)))
					{
						PlayerMoove(player, moove);
					}
					*/
			
					for (int x = 0; x < MobsNumber; x++)
					{

						Mobs[x]->Moove(player->Getx(), player->Gety());
						/* if (cooldown==false)
						{
						}*/
						if (projectileNumber < 0)
						{
							projectileNumber = 20;
						}

						projectile[projectileNumber] = ProjectileType( Mobs[x]);
						projectile[projectileNumber]->Set(player->GetAtk(), player->Getx(), player->Gety(), player->Ally());
						projectileNumber--;

					}
					
					if (player->alive.Get() == false)
						GameOver();

					int monsterD = 0;
					for (int number = 0; number < MobsNumber; number++)
					{
						if (Mobs[number]->verifyWave() == false)
						{
							monsterD++;
						}
					}
					
					if (monsterD == MobsNumber)
						waves1 = true;
					sf::Event event;
					while (window.pollEvent(event)) {
						if (event.type == sf::Event::Closed)
							window.close();
					}
					window.draw()
					window.clear(sf::Color::Black);
					window.display();
			}

	
	
}

Ennemi* GameManager::initiateMobs(int number, int enumber)
{
	Ennemi* Mobs;
	int e1 = number / 2;
	if (enumber <= e1)
	{
		Mobs = new Ennemi1; /*monstre 1*/
	}
	
	else if (enumber < number )
	{
		Mobs = new Ennemi2; /*monstre 2*/
	}
	else  
	{
		Mobs = new Ennemi2; /*monstre 3*/
	}
	
	Mobs->Set(0, 0);
	return Mobs;
}
void GameManager::PlayerMoove(Player* player, char moove)
{
	if (moove == 'z')
	{
		player->Set(-2, 0);
	}
	if (moove == 's')
	{
		player->Set(+2, 0);
	}
	if (moove == 'd')
	{
		player->Set(0, +2);
	}
	if (moove == 'q')
	{
		player->Set(0, -2);
	}

}

Projectile* GameManager::ProjectileType(Ennemi* Mobs)
{
	Projectile* projectile;
	if (Mobs->Monstertype() == 1)
	{
		projectile = new Projectile;/*Projectlile1*/

	}
	else if (Mobs->Monstertype() == 1)
	{
		projectile = new Projectile;/*Projectlile1*/

	}
	else if (Mobs->Monstertype() == 1)
	{
		projectile = new Projectile;/*Projectlile1*/

	}
	return projectile;
}





void GameManager::GameOver()
{
	/*draw*/
	bool loop = false;
	bool Replay = false;
	while (loop == false)
	{			  /*
		int touche = getch();
		if (touche == 32)
		{
			Replay = true;
			loop = true;

		}
		if (touche == 80)
		{
			draw
			if (touche == 32)
			{
				loop = true;

			}

		}
	}
	if (Replay == true)
		Level1();

	if (Replay == false)
		return;*/
	}
}