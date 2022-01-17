// 26 page 문자열
#include <iostream>
#include <string>

int main()
{
	char s1[] = "ABCD"; // C언어는 char 배열로 문자열 표현

	// C++ 에서는 "string 타입(클래스로 만든 타입)"을 사용
	std::string s2 = "hello";
	std::string s3 = "hello";

	// 정수형 변수 처럼 사용하면 됩니다.
	if (s2 == s3) {}  // 배열이라면 if ( strcmp(s2, s3) == 0 )
	s2 = s3;          // 배열이라면 strcpy(s2, s3)

	auto s4 = s2 + s3;

	std::cout << s4 << std::endl; // "hellohello"

}
