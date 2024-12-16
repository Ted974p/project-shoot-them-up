#include "pch.h"
#include "Entity.h"


Entity::Entity()
{
	mHp = 1;

}


bool Entity::Ally()
{
	return true;
}
int Entity::GetHp()
{
	return 0;
}
int Entity::GetAtk()
{
	return 0;
}
void Entity::EntityFigth(Entity* figther)
{
	bool verif1 = Ally();
	bool verif2 = figther->Ally();
	if (verif1 == verif2)
	{
		return;
	}
	else
	{
		int Hp;
		Hp = figther->GetHp() - GetAtk();
		alive.Verify(Hp);
		if (alive.Get() == false)
		{
			Death(figther);
		}
		else
			UpdateHp(Hp);
	}
}
void Entity::Death(Entity* figther)
{
	
}
bool Entity::verifyWave()
{
	return alive.Get();
}
void Entity::UpdateHp(int hp)
{
	return;
}
void Entity::Update(float dt)
{
	move(50 * dt, 0);
}

void Entity::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	states.transform.combine(this->getTransform());
	target.draw(circle, states);

}
