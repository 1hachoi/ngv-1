#include <iostream>

// 객체지향 언어는 실패의 전달을 "예외(exception)" 라는 문법을 사용합니다
// 장점 1. 반환 값과 실패가 완전히 분리되어 있다
//     2. 호출자가 예외를 잡지 않으면 프로그램이 종료 된다.
//     3. 예외를 잡으려면 try ~ catch 구문 사용
int ConnectServer()
{
	if (1)		    // 실패했다고 가정
		throw 1;	// 예외를 "던진다" 라고 표현

	return 0;
}
int main()
{
	try
	{
		int ret = ConnectServer();
	}
	catch (int n)
	{
		std::cout << "예외 발생" << std::endl;
		// 심각한 오류 였다면 여기서 종료(exit()) 
		// 문제를 해결했다면 계속 실행될수 있다.
	
	}
	std::cout << "계속 실행" << std::endl;
}





