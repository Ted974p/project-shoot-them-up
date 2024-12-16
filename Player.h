#pragma once
#include "pch.h"
#include "Projectile.h"
#include "Entity.h"
#pragma once
class Player : public  Entity  
{
	int mHp;
	int mAtk;
	int mBatk;
	float mBspd;
	bool mStart = false;
	bool mBh = false;
	bool mBb = false;
	bool mBp = false;
	bool mBm = false;
	bool mUp = false;
	int mFatk;
	float mFspd;
	int mFhp;
	int mUpw;
	char mStat[10];
public:


	void Set(float x, float y) ;
	int SetHp() ;
	int SetAtk() ;
	void updateStats();
	void Boost();
	float SetSpd() ;
	void UpdateBoost();
	float Getx() ;
	float Gety() ;
	int GetAtk() override ;
	int GetHp() override ;
	float GetSpd() ;
	void  statuslist(char b);
	bool Ally();
	void UpdateHp(int hp) override;

};
