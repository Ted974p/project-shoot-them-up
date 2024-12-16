#pragma once
#include "Ennemi.h"
class Ennemi2 :public Ennemi
{

public:
	float mX;
	float mY;
	int mAtk;
	int mHp;
	float mSpd;
	bool mStart = false;
public:
	void  EnnemiHpBar() override;
	void  Moove(float x, float y) override;
	void Set(float x, float y) override;
	int  SetAtk() override;
	int  SetHp() override;
	float SetSpd() override;
	void SetStats() override;
	float Getx() override;
	float Gety() override;
	int GetHp() override;
	int GetAtk() override;
	float	GetSpd() override;
	void Ability(float x, float y)override;
	int Monstertype();
};
