#include "Entity.h"

Entity::Entity()
{

}


void Entity::Set(float x, float y)
{
	Position.Stock(x, y);
	SetAtk();
	SetHp();
}
void Entity::GetPosition()
{
	mX = Position.GetX();
	mY = Position.GetY();
}
 void Entity:: SetStats()
{
	 mHp = SetHp();
	 mAtk = SetAtk();
	 mSpd = SetSpd();
}
 float Entity::SetSpd()
 {
	 return 0;
 }
 int Entity::SetHp()
 {
	 return 1;
 }
 int Entity::SetAtk()
 {
	 return 1;
 }

 int Entity::GetAtk()
 {
	 return mAtk;
 }
 int Entity::GetHp()
 {
	 return mHp;
 }
 float Entity::GetSpd()
 {
	 return mSpd;
 }
 void Entity:: Test()
 {
	 std::cout << mAtk << "  " << mHp;
 }
 void Entity::EntityFigth(Entity figther)
 {
	 figther.mHp -= GetAtk();
	 if (figther.mHp < 1)
	 {
		 Death(figther);
	 }

 }
 void Entity::Death(Entity figther)
 {

 }
 