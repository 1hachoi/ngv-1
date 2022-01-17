// 3_var1.cpp ( variable ) - 18 page
#include <iostream>

// 기본적으로는 비트 단위 접근은 안되지만 
// 아래 처럼 하면 비트 단위 접근 가능합니다(C의 비트 필드)
/*
struct AAA
{
	int n1:3;
	int n2:10;
};
*/
// 왜 기본적으로 비트 단위 접근을 허용하지 않나요 ?
// ==> 주소를 생각해 보세요.


int main()
{
	int n1 = 0b11110000;  // 이진수 표기법 ( C도 C11 부터 지원)
	int n2 = 1'000'000;    // 자릿수 표기법( C++11 부터)
							// 정수 리터럴 사이의 ' 는 무시해달라는것

	// 추가된 타입
	bool b = true; // false, 1byte 크기

	long long n3 = 10; // 64bit 정수 (C++11 추가)
}







