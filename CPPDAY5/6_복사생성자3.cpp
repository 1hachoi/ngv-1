#include <iostream>
// 항상 학습할때, main 함수 1번째 줄이 실행될때 메모리를 그릴수 있어야 합니다.
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
};
int main()
{
	Buffer b1(64);
	//--------- 여기까지는 문제 없는데
	// 아래 코드가 문제 입니다. 생각해보세요
	Buffer b2 = b1; // Buffer b2(b1)
					// 복사 생성자 호출
					// 컴파일러가 제공한 버전 사용
}