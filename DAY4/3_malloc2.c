// 3_malloc2.c - 112page
// 1. 다양한 C 표준함수 사용시, 어떤 헤더가 필요한지알아야 합니다.
//    cppreference.com 에서 검색 하면 됩니다.
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 0;
	// malloc 함수 : 인자로 전달된 만큼의 메모리를 할당하는 함수
	
	// 일반 변수 : 이름이 있으므로 이름으로 접근하면 됩니다.
	// 동적 할당 : 이름이 없습니다. 주소로만 접근 가능합니다.
	int *p = malloc(40); // 40 byte를 할당해 달라.
	
	// 아래 2줄은 동일합니다
	*(p + 1) = 10;
	p[1] = 10;

	// 필요없으면 반드시 제거해야 합니다.
	free(p); // p가 가리키던 (40byte 할당된) 메모리 제거
	p = 0; // 좋은 습관

//	*p = 10; // p가 자동으로 0으로 초기화되지 않습니다.
			// p는 계속 주소가 있습니다.
			// 그런데, 그 주소는 이미 파괴 되었습니다.
			// "dangling pointer" 라는 용어를 사용합니다.
	

	// p는 지역변수 이므로 계속 사용가능

	p = malloc(20);
	free(p);
}

/*
	free(p); // heap 에 있는 20 byte 파괴

} // p, n 이 파괴(지역변수)

// g는 프로그램종료시
*/

// 4:10 에 이어집니다.