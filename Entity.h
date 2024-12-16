#pragma once
#include "Vector2.h"
#include <iostream>
#include "Alive.h"
#include <SFML/Graphics.hpp>
class Entity :public sf::Drawable , public sf::Transformable
{
	int mHp;
	sf::CircleShape circle;

public:
	Vector2 Position;
	Alive alive;
	Entity();
	void EntityFigth(Entity* figther);
	virtual void Death(Entity* figther);
	virtual bool Ally();
	virtual int GetHp();
	virtual int GetAtk();
	virtual void UpdateHp(int Hp);
	bool verifyWave();
	void Update(float dt);
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};