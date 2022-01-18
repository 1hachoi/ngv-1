#include <iostream>

// ��ü���� ���α׷��� : �ʿ��� Ÿ���� ���� ���� ����.
// Ÿ���� "Rect, Point, Bike, Person" � �ִ� ���� �ƴϴ�.
// ���� �迭�̶�� Ÿ���� ������ ���ô�.
class Vector
{
	int* buff;
	int  size;
public:
	Vector(int sz)
	{
		size = sz;
		buff = new int[size];
	}
	// �Ҹ��ڰ� �ʿ��� ���� 
	// �����ڿ��� �ڿ��Ҵ�(�޸�, ���Ͽ���, DB���ӵ�)
	// �� �� ���, �Ҹ��ڿ��� �ڿ� �ݳ�
	~Vector()
	{	
		delete[] buff;
	}
	void resize(int newsize)
	{
		if (newsize > size)
		{
			int* temp = new int[newsize];
			memcpy(temp, buff, sizeof(int) * size);
			delete[] buff; // ���� ���� ����
			buff = temp;
			size = newsize;
		}
	}
	void setAt(int idx, int value)
	{
		if (idx >= 0 && idx < size)
		{
			buff[idx] = value;
		}
	}
};
int main()
{
	Vector v(5); // �̼����� �޸� �׸��� �����ϼ���.

	v.resize(10); // ���۸� 10���� Ű���޶�.

	v.setAt(0, 10); // 0��° 10 �־� �޶�.
}



