// main.c 만드세요
#include <stdio.h> // 미리 약속된 디렉토리에서 검색
#include "add.h"   // 현재 디렉토리 검색

int main()
{
	int ret = add(3, 4);

	printf("%d\n", ret);
}

// 컴파일 과정의 원리 - 
// gcc main.c   => add가 어디 있는지 모른다.
// gcc add.c    => main 함수가 없어서 에러

// 1. 각 소스를 먼저 컴파일만 한다.
// gcc main.c -c      ==> main.o 생성     
//							이안에는 call "add의 주소를 채워야한다."
// gcc add.c  -c      ==> add.o  생성

// cl main.c /c   => main.obj

// dir 해서 파일 확인해 보세요

// 2. 두개의 목적파일(.o, .obj)를 결합해서 실행파일 생성
// ld라는 프로그램인데.. gcc명령을 사용하면 자동으로 ld 실행

// 
// gcc main.o add.o     ===> a.exe
//   결국(ld main.o add.o 이렇게 하게 됩니다.)

// 3. a.exe 실행




