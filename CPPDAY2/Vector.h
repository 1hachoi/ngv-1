#pragma once

// Vector.h ����� �Ʒ� ���� �κ� ��������.
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
