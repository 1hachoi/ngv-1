#include <stdio.h>
#include <string.h> // C 표준이제공하는 다양한 문자열 함수가 있습니다.
					// 모두 strxxx() 형태의 이름을 가지고 있습니다.
int main()
{
	char s1[] = "hello";
	char s2[6];

//	s2 = s1; // 컴파일 에러
//	strcpy(s2, s1);			// 표준 함수인데, 보안상 문제가 될수 있어서
							// 일부 컴파일러는 새로운 함수를 사용하라고 에러
							// 가 나기도 합니다.
	strcpy_s(s2, 6, s1);    // 보안상 안전한 함수(2번째 인자는 배열의크기)

	// 아래 코드는 "s1,s2 가 모두 "hello"를 보관하지만"
	// 1번째 요소의 주소는 다르므로 항상 false 입니다.
	if (s2 == s1)
		printf("같은 문자열\n");
	else 
		printf("다른 문자열\n");

	//--------------------------------
	char s3[] = "abcd";
	char s4[] = "abcd"; // "abcx"

	int ret = strcmp(s3, s4); // 문자열이 같으면 0
							  // 다른 경우, s3가 크면 양수, 적으면 음수
	printf("%d\n", ret);

	if (strcmp(s3, s4) == 0)
		printf("같은 문자열\n");
	//---------------------
	char s5[] = "hello";

	printf("%d\n", sizeof(s5)); // 배열이 사용하는 메모리 크기  6
	printf("%d\n", strlen(s5)); // 문자열의 갯수 5


	char s6[10] = "abcd";
	printf("%d\n", sizeof(s6)); // ?
	printf("%d\n", strlen(s6)); // ?
}

// lexicographical compare : 1글자 부터 사전순서로 비교 한다는 것을 의미.






