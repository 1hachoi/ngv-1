#include <iostream>

class Buffer
{
	int* buff;
	int size;
public:
	Buffer(int sz) : size(sz)
	{
		buff = new int[size];
	}
	~Buffer()
	{
		delete[] buff;
	}
	// 사용자가 만드는 복사 생성자
	// 복사 생성자 모양은 미리 정의 되어 있습니다. 꼭 아래처럼 해야 합니다.
	Buffer(const Buffer& b) : size(b.size)
	{
		// 포인터가 아닌 경우는 그냥 복사
		// size = b.size;

		// 포인터의 경우
		// 필요한 크기의 메모리 할당후
		// 메모리 내용 자체를 복사
		buff = new int[size];

		memcpy(buff, b.buff, sizeof(int) * size);
	}

};
int main()
{
	Buffer b1(64);
	Buffer b2 = b1; // Buffer b2(b1)
}

// 파이썬 하신 분들..
// s1 = [1,2,[1,2] ];
// s2 = s1   // 얕은 복사

// s3 = s1.copy() // 얕은 복사

// import deepcopy
// s4 = deepcopy.copy(s1) // 깊은 복사
//	// deep
