#include "pch.h"
#include "Alive.h"

Alive::Alive()
{
	mAlive = true;
}
void Alive::Verify(int Hp)
{
	if (Hp > 0)
		return;
	else
		mAlive = false;

}
bool Alive::Get()
{
	return mAlive;
}