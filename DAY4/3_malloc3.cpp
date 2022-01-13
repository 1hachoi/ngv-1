// 3_malloc3.c
#include <stdio.h>
#include <stdlib.h>

// malloc 함수의 모양을 예측해 봅시다.
// 반환 타입은 "void*" 입니다.=> 아직 안배운 내용.
/*
void* malloc(int size)
{
	// 메모리를 할당하는 OS함수를 호출
	// 할당된 메모리 주소 반환
	return 주소;
}
*/

#define FREE(p)  free(p); p = 0

int main()
{
	// malloc - 113 page 아래 이야기
	// malloc 은 전달된 크기의 메모리를 할당할뿐 입니다.
	// 메모리를 어떤형식으로 사용할지는 반환된 주소를 어떤 타입의
	// 포인터에 담을지에 따라 달라 집니다.
	// C   : void* => 다른 타입* 는 암시적 변환 가능
	// C++ : void* => 다른 타입* 는 암시적 변환 안됨.
	//					명시적 변환 가능
	int    *p1 = (int*)malloc(40);
	double *p2 = (double*)malloc(40);

	*p1 = 10;  // 4바이트단위로 접근
	*p2 = 3.4; // 8바이트 단위로 접근

	free(p1);
	free(p2);

	// 다음중 좋은 코드는 ?
	int *p3 = (int*)malloc(40);					// 1
	int *p4 = (int*)malloc(sizeof(int) * 10);	// 2 ==> 좋은 코드

	free(p3);
//	free(p4);
	FREE(p4);
}




