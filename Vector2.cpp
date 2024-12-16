#include "pch.h"
#include "Vector2.h"

Vector2::Vector2()
{
	Mx = 0;
	My = 0;
}
void Vector2::Stock(float x, float y)
{
	Mx = x;
	My = y;
}
float Vector2::GetX()
{
	return Mx;
}
float Vector2::GetY()
{
	return My;
}