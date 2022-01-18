#include <iostream>

// 클래스(타입)을 만들지 말고 틀(템플릿)을 만드는 것이 좋을때가 있다.
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
			
			delete[] buff; // 기존 버퍼 제거
			buff = temp;
			size = newsize;
		}
	}
	// T 로 하면 "크기가 큰 타입일수있다."
	// call by value 보다 const T& 가 좋다.
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



