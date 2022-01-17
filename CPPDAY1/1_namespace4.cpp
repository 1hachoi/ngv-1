// 10 page
//#include <stdio.h> //  printf가 전역공간에만 있다.
#include <cstdio>    // 전역공간 + std:: 안에 모두 있다.

int main()
{
	// printf 는 C표준이지만, C++표준이기도 합니다.
	printf("hello\n");
	std::printf("hello\n"); // 될까요 ???? 
}
// C언어에서 배운 헤더     C++이 다시 만든 헤더
// <파일이름.h>        ===>   <c파일이름>
// <stdio.h>          ===>   <cstdio>
// <string.h>         ===>   <cstring>
// <stdlib.h>         ===>   <cstdlib>

// 모든 C++ 표준헤더파일은 "확장자가 없습니다"

// https://github.com/aosp-mirror   안드로이드 운영체제 코드 입니다.

// platform_system_core 로 이동하세요

// libutils/callback.cpp 같은 코드 열어 보세요

// github.com/tensorflow    => "가장 유명한 AI 엔진중 한개"