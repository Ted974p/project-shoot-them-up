#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Vector2.h"
#include "Entity.h"
#include"Windows.h"
#include <stdio.h>
#include <conio.h>
#include "Player.h"
#include "Ennemi.h"
#include "Projectile.h"
#include "PlayerProjectile.h"
#include "Ennemi1.h"
#include "Ennemi2.h"


class GameManager
{
public:
	GameManager();
	void Menu();
	Ennemi* initiateMobs(int number ,int enumber);
	void Level1();
	void Level2();
	void Level3();
	void GameOver();
	void PlayerMoove(Player* player ,char moove);
	Projectile* ProjectileType(Ennemi* Mobs);


};

