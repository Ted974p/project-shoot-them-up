#include "pch.h"
#include "Projectile.h"


void Projectile:: Set(int damage, float x, float y, bool Ally)
{
	mAtk = damage;
	mAlly = Ally;
	Position.Stock(x, y);
}
void Projectile::remove()
{
	return;
}
void Projectile::moove()
{
	return;
}
void Projectile::ennemieDetected(Entity* target)
{
	if (mAlly == target->Ally())
	{
		return;
	}
	else if (Position.GetX() == target->Position.GetX() && Position.GetY() == target->Position.GetY()) /*transformer en hitbox*/
	{
		hit( target);
	}
}
void Projectile::hit(Entity* target)
{
	return;
}
void Projectile::deleteProjectile()
{
	//new Projectile;
	Position.Stock(Position.GetX(), Position.GetY());
}
