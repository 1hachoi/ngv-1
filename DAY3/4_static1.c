// 4_static1.c - 85page
#include <stdio.h>

int count = 0; // 프로그램 실행중 파괴되지 않는다.
			   // 모든 함수가 접근 가능하다. 
			   // 하나의 함수에서만 사용할것이라면.. 위험하다.

// 대기표를 반환하는 함수
int get_wait_number()
{
//	int count = 0; // 지역변수, 함수 호출 종료시 파괴.
	static int count = 0; // life cycle 은 전역변수와 동일하고
						  // visibility 는 지역변수와 동일하다.
						  // 1. static 메모리에 놓인다.(전역변수와 동일)
						  // 2. 프로그램 실행시 메모리에 놓인다.
						  // 3. 초기화는 함수가 최초 실행될때 1회만 초기화
						  // 4. 이후 호출에서는 초기화 코드 실행 안됨.
						  // 5. 초기값 생략시 자동으로 0 됩니다.(static 메모리 특징)
	++count;
	return count;
}
int main()
{
	printf("%d\n", get_wait_number());
	printf("%d\n", get_wait_number());
//	count = 200; // error가 나오게 하고 싶다.
	printf("%d\n", get_wait_number());
}