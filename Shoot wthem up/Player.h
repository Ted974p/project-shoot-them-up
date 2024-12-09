#include "Entity.h"
#pragma once
class Player  : public  Entity
{
	int mHp;
	int mAtk;
	int mBatk;
	float mBspd;
	bool mStart;
	bool mBh;
	bool mBb;
	bool mBp;
	bool mBm;
	bool mUp;
	int mFatk;
	float mFspd;
	int mFhp;
	int mUpw;
	char mStat[10];
public :
	Player();

	void Set(float x,float y) override;
	int SetHp() override;
	int SetAtk() override;
	void updateStats();
	void Boost();
	float SetSpd() override;
	void UpdateBoost();
	int GetAtk() override;
	int GetHp() override;
	float GetSpd() override; 
	void  statuslist(char b);
};

