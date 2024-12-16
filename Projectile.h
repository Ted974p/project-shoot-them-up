#pragma once
#include "Entity.h"
class Projectile : public  Entity
{ 
	int mAtk;
	bool mAlly;


public:
	
	//Projectile();
	void  virtual Set (int damage, float x, float y, bool Ally);
	void   ennemieDetected(Entity* target);
	void  virtual hit(Entity* target);
	void virtual moove();
	void deleteProjectile();
	void  remove();

};

