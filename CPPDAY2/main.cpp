// 파일 분할 이야기.
// 시나리오 1. 다른파일에 함수 구현이 있고, #include 하는 경우

// g++ main.cpp     ==> a.exe
// cl  main.cpp
// 
// 정확히 파악하려면
// g++ main.cpp -E -P
// main.cpp

#include "add"  // 이 파일의 내용을 이 부분에 놓아 달라.

int main()
{
	int n = Add(1, 2);
}

// 4:10 분부터 이어집니다.