// 2_switch1.c
#include <stdio.h>

int main()
{
	int n = 1;

	// 변수 값에 따라 실행할 코드 선택 - 42 page
	// 1. 기본 개념
	// 2. switch 를 사용하지 않아도 if 로 표현 가능하다. if~else 보다 간결해 보인다.
	// 3. default 구문은 필요한 경우만 만들면 됩니다.
	// 4. case 구문에서 실행할 문장이 여러줄이라도 {} 필요 없습니다.
	// 5. 의도적으로 break를 생략하기도 합니다. - fallthrough 라고 합니다.
	// 6. C언어는 정수값만 가능, 단, C#등 일부 언어는 실수, 문자열도 가능.
	switch (n)
	{
	case 1:
		printf("1\n");
		printf("one\n");  // {} 로 없이 여러줄 가능.. break 가 있으므로
		break;
	case 2:
		printf("2\n");
		break;
//	default:			// 위의 조건을 만족하지 않은 모든 경우
//		printf("3\n");  // 필요없으면 생략가능
	}

	// 다른 언어들.. 
	// 1. switch 가 정말 필요한가 ?? if가 있는데 ? => python 등에는 switch가 없습니다.
	// 2. swift, C# 은 switch 가 아주 훌륭합니다.
	// 아래 코드는 swift 코드 입니다
	/*
	switch (n)
	{
	case 1...10:
		break;
	case 20...<30:
		break;
	}
	*/

	// 결론 : C에서는 일반적으로 if 를 널리 사용
	//     if ~ else if 가 길어지는 경우만 switch 사용
	return 0;
}
// C의 조건문 2개 : if, switch

