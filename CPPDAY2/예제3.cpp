#include <iostream>

// Ŭ����(Ÿ��)�� ������ ���� Ʋ(���ø�)�� ����� ���� �������� �ִ�.
template<typename T>
class Vector
{
	T* buff;
	int  size;
public:
	Vector(int sz)
	{
		size = sz;
		buff = new T[size];
	}

	~Vector()
	{
		delete[] buff;
	}
	void resize(int newsize)
	{
		if (newsize > size)
		{
			T* temp = new T[newsize];

			memcpy(temp, buff, sizeof(T) * size);
			
			delete[] buff; // ���� ���� ����
			buff = temp;
			size = newsize;
		}
	}
	// T �� �ϸ� "ũ�Ⱑ ū Ÿ���ϼ��ִ�."
	// call by value ���� const T& �� ����.
	void setAt(int idx, const T& value)
	{
		if (idx >= 0 && idx < size)
		{
			buff[idx] = value;
		}
	}
};

int main()
{
	Vector<int> v(5); 

	v.resize(10);

	v.setAt(0, 10);
}



