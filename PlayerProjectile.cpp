#include "pch.h"
#include "PlayerProjectile.h"

void PlayerProjectile::hit(Entity* target)
{
	EntityFigth(target);
}
void PlayerProjectile::moove()
{
	Position.Stock(0, 10);
}
void PlayerProjectile::SpecialAbility(int power)
{
	if (power < 3)
		return;
	else

		mAtk += 10;
}
void PlayerProjectile::Set(int damage, float x, float y, bool Ally)
{
	mAtk = damage;
	mAlly = Ally;
	Position.Stock(x, y);

}

int PlayerProjectile::GetAtk()
{
	return mAtk;
}