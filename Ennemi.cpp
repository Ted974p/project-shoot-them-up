#include "pch.h"
#include "Ennemi.h"


int Ennemi::SetHp()
{
	return 1;
}
int Ennemi::SetAtk()
{
	return 1;
}
void Ennemi::Set(float x, float y)
{

	
}


void Ennemi::SetStats()
{
	mHp = SetHp();
	mAtk = SetAtk();
	mSpd = SetSpd();
}
float Ennemi::SetSpd()
{
	return 0;
}

float Ennemi::Getx()
{
	return 0;
}
float Ennemi::Gety()
{
	return 0;
}
int Ennemi::GetAtk()
{
	return mAtk;
}
int Ennemi::GetHp()
{
	return mHp;
}
float Ennemi::GetSpd()
{
	return mSpd;
}

void Ennemi::Ability(float x, float y)
{
	return;
}

int Ennemi::Monstertype()
{
	return 0;
}

bool Ennemi::Ally()
{
	return false;

}
void Ennemi::EnnemiHpBar()
{
	return;
}

void Ennemi::Moove(float x, float y)
{
	return;
}