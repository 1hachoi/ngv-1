#include <iostream>

// 객체지향 프로그래밍 : 필요한 타입을 먼저 설계 하자.
// 타입은 "Rect, Point, Bike, Person" 등만 있는 것이 아니다.
// 동적 배열이라는 타입을 설계해 봅시다.
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
	// 소멸자가 필요한 이유 
	// 생성자에서 자원할당(메모리, 파일오픈, DB접속등)
	// 을 한 경우, 소멸자에서 자원 반납
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
			delete[] buff; // 기존 버퍼 제거
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
	Vector v(5); // 이순간의 메모리 그림을 생각하세요.

	v.resize(10); // 버퍼를 10개로 키워달라.

	v.setAt(0, 10); // 0번째 10 넣어 달라.
}



