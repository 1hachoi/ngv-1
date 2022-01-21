#include <iostream>

int main()
{ 
	// endl 의 정체는 사실 "함수 입니다." - 좀 복잡한 디자인 기법을 사용합니다.
	// 191 page
	std::cout << std::endl;

	std::endl( std::cout ); // 이 코드가 위 코드와 동일합니다.

	std::cout << std::endl; // cout.operator<<(endl)
						    // cout.operator<<(함수)  => 함수 이름은 함수 주소의미
							// cout.operator<<(함수주소)가 호출되는 원리 입니다.
	// 192 아래 박스에 endl 구현 코드 있습니다. 참고 하세요.


}



