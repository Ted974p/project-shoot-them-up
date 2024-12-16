#include "pch.h"
#include "Ennemi1.h"
#include <conio.h>

void Ennemi1::EnnemiHpBar()
{
	return;
}
void Ennemi1::Moove(float x, float y)
{

	int ennemiX = 0;
	int ennemiY = 0;
	if (x < Getx())
		ennemiX = -10;
	if (x > Getx())
		ennemiX = -10;
	if (y < Gety())
		ennemiY = -10;
	if (y > Gety())
		ennemiY = +10;
	Set(ennemiX, ennemiY);
	Ability(x,y);


}
void Ennemi1::Set(float x, float y)
{


	if (mStart == true)
	{
		float fx = Getx() + x;
		float fy = Gety() + y;
		if (fx < 0)
		{
			fx = 830;
		}
		else if (fy < 0)
		{
			fy = 0; 
		}
		else if (fy > 600)
		{
			fy = 600;
		}
		Position.Stock(fx, fy);
	}
	else if (mStart == false)
	{
		int Px = 750;
		int Py = 300;
		Position.Stock(Px, Py);
		SetStats();
		mStart = true;
	}
}
int Ennemi1::SetAtk()
{
	return 5;
}
int Ennemi1::SetHp()
{
	return 6;
}
float Ennemi1::SetSpd()
{
	return 2.0f;
}
void Ennemi1::SetStats()
{
	mAtk=SetAtk();
	mHp=SetHp();
	mSpd = SetSpd();
}
float Ennemi1::Getx()
{
	return Position.GetX();
}
float Ennemi1::Gety()
{
	return Position.GetY();
}
int Ennemi1::GetHp()
{
	return mHp;
}
int Ennemi1::GetAtk()
{
	return mAtk;
}
float Ennemi1::GetSpd()
{
	return 2.0f;
}

void Ennemi1::Ability(float x, float y)
{
	if (x == Position.GetX() && y == Position.GetY())
	{
		mHp = 0;
	}

}

int Ennemi1::Monstertype()
{
	return 1;
}

