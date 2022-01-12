// 6_macro1.c - 135
//#include <stdio.h>
//#define PI 3.14     // 매크로 상수 - 전처리기가 처리

// 1. 최초에는 C언어에 const는 없었습니다
// 2. C++에서 const를 만들었습니다. 
//    그리고, 매크로 상수대신 const를 사용하자고 제안합니다.
// 3. C도 const를 도입했습니다.

const double PI = 3.14; // 컴파일러가 처리

int main()
{
	double area = 3 * 3 * PI;
}

// 소스가 컴파일 되는 과정 ( 136 page)
// 1. 전처리기가 소스에서 #으로 시작하는 문장을 처리     - 전처리기
// 
// 2. 전처리를 마친 코드를 컴파일러가 기계어 코드로 변경 - 컴파일러
//    C 코드 => 어셈블리코드 => 기계어 순으로 변경됩니다.
// 
// 3. 변경된 기계어 코드를 링커거 실행가능한 파일로 변경 - 링커