#include "Vecteur2.h"

Vecteur2::Vecteur2()
{

}
void Vecteur2::Stock(float x, float y)
{
	Mx = x;
	My = y;
}
float Vecteur2::GetX()
{
	return Mx;
}
float Vecteur2::GetY()
{
	return My;
}