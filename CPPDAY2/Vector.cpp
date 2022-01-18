// Vector.cpp 
#include "Vector.h"

Vector::Vector(int sz)
{
	size = sz;
	buff = new int[size];
}

Vector::~Vector()
{
	delete[] buff;
}

void Vector::resize(int newsize)
{
	if (newsize > size)
	{
		int* temp = new int[newsize];
		memcpy(temp, buff, sizeof(int) * size);
		delete[] buff; // 기존 버퍼 제거
		buff = temp;
		size = newsize;
	}
}
void Vector::setAt(int idx, int value)
{
	if (idx >= 0 && idx < size)
	{
		buff[idx] = value;
	}
}