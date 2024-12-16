#include "pch.h"
#include "Ennemi2.h"

void Ennemi2::EnnemiHpBar()
{
	return;
}
void Ennemi2::Moove(float x, float y)
{
	int ennemiX = 0;
	int ennemiY = 0;
	if (x < Getx())
		ennemiX = -10;
	if (x > Getx())
		ennemiY = +10;
	Set(ennemiX, ennemiY);
	Ability(x, y);

}
void Ennemi2::Set(float x, float y)
{


	if (mStart == true)
	{
		float fx = Getx() + x;
		float fy = Gety() + y;
		if (fy < 0)
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
int Ennemi2::SetAtk()
{
	return 5;
}
int Ennemi2::SetHp()
{
	return 6;
}
float Ennemi2::SetSpd()
{
	return 2.0f;
}
void Ennemi2::SetStats()
{
	mAtk = SetAtk();
	mHp = SetHp();
	mSpd = SetSpd();
}
float Ennemi2::Getx()
{
	return Position.GetX();
}
float Ennemi2::Gety()
{
	return Position.GetY();
}
int Ennemi2::GetHp()
{
	return mHp;
}
int Ennemi2::GetAtk()
{
	return mAtk;
}
float Ennemi2::GetSpd()
{
	return 2.0f;
}

void Ennemi2::Ability(float x, float y)
{
	return;
}

int Ennemi2::Monstertype()
{
	return 2;
}
