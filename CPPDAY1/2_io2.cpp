// 2_io2.cpp- 16page 아래
#include <iostream> // 이 헤더만 있으면 printf 도 사용가능
#include <iomanip>   // cout 의 출력 형태를 변경하는 도구들을
					// io manipulator 라고 합니다. - 16page 중간박스참고
int main()
{
	int n = 10;
	printf("%x\n", n); // 16진수로

	std::cout << n << std::endl; // 10진수		
	std::cout << std::hex << n << std::endl; // 16 진수	
	std::cout << std::dec << n << std::endl;

	std::cout << std::setw(10) << n << std::endl; // 10자리에 맞춰서.
}