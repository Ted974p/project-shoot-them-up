#include "pch.h"
#include "Player.h"



void Player::Set(float x, float y)
{


	if (mStart == true)
	{
		float fx = Getx() + x;
		float fy = Gety() + y;
		if (fx < 0)
		{
			fx = 0;
		}
		else if (fx > 800)
		{
			fx = 800;
		}
		else if (fy < 0)
		{
			fy = 0;
		}
		else if (fy > 800)
		{
			fy = 800;
		}
		Position.Stock(fx, fy);
	}
	else if (mStart == false)
	{
		int Px = 0;
		int Py = 200;
		Position.Stock(Px, Py);
		SetAtk();
		SetHp();
		mStart = true;
	}

}
int Player::SetHp()
{
	return 30;
}
int Player::SetAtk()
{
	return 10;
}
float Player::SetSpd()
{
	return 3;
}
void Player::Boost()
{
	for (int x = 0; x < 15; x++)
	{
		char type = mStat[x];

		if (type == 'h') /*hephaistos hammer*/
		{
			mBh = true;
		}
		if (type == 'b') /*Hermes boot*/
		{
			mBb = true;
		}
		if (type == 'p') /*Pandora box*/
		{
			mBp = true;
		}
		if (type == 'm') /*meat */
		{
			mBm = true;
		}
		if (type == 'u')
		{
			mUp = true;
		}

	}
	UpdateBoost();


}
void Player::statuslist(char a)
{
	int list = 0;
	a = mStat[list];

}
void Player::UpdateBoost()
{

	if (mBp == true)
	{
		mBspd -= 0.5;
		mBp = false;
	}

	if (mBh == true)
	{
		mBatk = 10;
		mBh = false;
	}

	if (mBb == true)
	{
		mBspd = 2;
		mBb = false;
	}

	if (mBm == true)
	{
		mHp += 10;
		mBm = false;
	}
	if (mUp == true)
	{
		mBatk = 10;
		mUp = false;
	}

	updateStats();
}
void Player::updateStats()
{
	mFhp = GetHp();
	mFatk = GetAtk() + mBatk;
	mFspd = GetSpd() + mBspd;
	mBatk = 0;
	mBspd = 0;
}
int Player::GetAtk()
{
	return mFatk;
}
int Player::GetHp()
{
	return mFhp;
}
float Player::GetSpd()
{
	return mFspd;
}
float Player::Getx()
{
	return Position.GetX();
}
float Player::Gety()
{
	return Position.GetY();
}
bool Player::Ally()
{
	return false;

}
void Player::UpdateHp(int hp)
{
	mHp = hp;
}
