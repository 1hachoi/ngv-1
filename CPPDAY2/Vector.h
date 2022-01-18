#pragma once

// Vector.h 만들고 아래 선언 부분 넣으세요.
class Vector
{
	int* buff;
	int  size;
public:
	Vector(int sz);
	~Vector();

	void resize(int newsize);
	void setAt(int idx, int value);
};
