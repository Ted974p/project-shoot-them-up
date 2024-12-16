#include "pch.h"
#include "Ennemi3.h"
void Ennemi3::EnnemiHpBar()
{
	return;
}
void Ennemi3::Moove(float x, float y)
{

	Ability(x, y);

}
void Ennemi3::Set(float x, float y)
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
int Ennemi3::SetAtk()
{
	return 5;
}
int Ennemi3::SetHp()
{
	return 6;
}
float Ennemi3::SetSpd()
{
	return 2.0f;
}
void Ennemi3::SetStats()
{
	mAtk = SetAtk();
	mHp = SetHp();
	mSpd = SetSpd();
}
float Ennemi3::Getx()
{
	return Position.GetX();
}
float Ennemi3::Gety()
{
	return Position.GetY();
}
int Ennemi3::GetHp()
{
	return mHp;
}
int Ennemi3::GetAtk()
{
	return mAtk;
}
float Ennemi3::GetSpd()
{
	return 2.0f;
}

void Ennemi3::Ability(float x, float y)
{
	return;
}

int Ennemi3::Monstertype()
{
	return 3;
}
