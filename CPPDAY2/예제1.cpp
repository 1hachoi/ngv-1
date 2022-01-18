#include <iostream>

int main()
{
	// 사용자가 -1을 입력할때 까지 입력 받아야 합니다.
	// 그런데, 모든 입력값을 보관하고 싶습니다.
	// 어떻게 할까요 ?
	int size = 5;  // 할당된 메모리 크기
	int count = 0; // 입력된 갯수
	int n = 0;

	int* p = new int[size];

	while (1)
	{
		std::cin >> n;

		if (n == -1) break;

		p[count] = n; // 보관
		++count;

		if (count == size)
		{
			size = size + 5;

			int* temp = new int[size];

			memcpy(temp, p, sizeof(int) * size - 5);

			delete[] p; // 기존 버퍼 제거

			p = temp;
		}
	}
	// 여기서
	// count : 입력된 갯수
	// size  : 할당된 메모리 크기
	// count 와 size는 다를수 있음


	// 사용후에는 최종적으로는 버퍼 제거
	delete[] p;

	// 
//	int* p1 = new int[10];

//	p1 = new int[20]; // C#, java, python : 이순간 p1이 가리키던 기존 메모리는
					//					자동 삭제 됩니다.
					// C/C++ : 자동삭제 안됩니다. 메모리 누수 입니다.
					//			그래서, C/C++이 아주 어렵다고 합니다.


}

// 2:20 분에 이어집니다.

