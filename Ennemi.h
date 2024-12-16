#pragma once

#include "Entity.h"
#include "Projectile.h"

class Ennemi : public Entity
{
	int mAtk;
	int mHp;
	float mSpd;



public:

	bool Ally() override;
	void virtual EnnemiHpBar();
	void virtual Moove(float x, float y);
	virtual void Set(float x, float y);
	virtual int  SetAtk();
	virtual int  SetHp();
	virtual float SetSpd();
	virtual void SetStats();
	virtual float Getx();
	virtual float Gety();
	virtual int GetHp();
	virtual int GetAtk();
	virtual float	GetSpd();
	virtual void  Ability(float x,float y);
	virtual int Monstertype();
};

