// Car.cpp
#include "Car.h"

int Car::cnt = 0;

Car::Car(int s) 
	: speed(s) 
{
	++cnt; 
}
Car::~Car() 
{
	--cnt; 
}
int Car::get_count() 
{
	return cnt; 
}
