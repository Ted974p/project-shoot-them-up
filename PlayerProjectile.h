#pragma once
#include "Projectile.h"
class PlayerProjectile : public Projectile 
{
	int mAtk;
	bool mAlly;

public:
	void Set(int damage, float x, float y, bool Ally);
	void   hit(Entity* target) override;
	void  moove() override;
	void  SpecialAbility(int power);
	int GetAtk() override;
};

