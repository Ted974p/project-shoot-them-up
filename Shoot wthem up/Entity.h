#pragma once
#include "Vecteur2.h"
#include <iostream>
class Entity
{
	float mX;
	float mY;
	int mAtk;
	int mHp;
	float mSpd;
	
 public :
	 Vecteur2 Position;
	 Entity();

	 virtual void Set(float x, float y);
	 void GetPosition();
	 virtual int  SetAtk();
	 virtual int  SetHp();
	 virtual float SetSpd();
	 virtual void SetStats();
	 virtual int GetHp();
	 virtual int GetAtk();
	 virtual float	GetSpd();
	 void Test();
	 void EntityFigth(Entity figther);
	 virtual void Death(Entity figther);
};

