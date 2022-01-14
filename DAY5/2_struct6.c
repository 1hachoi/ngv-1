#include <stdio.h>

// 인사관리 프로그램을 작성하고 싶다. 3명의 사람을 관리해야 한다.
// 1. 사람 타입을 설계해라!
struct _People
{
	char name[32];
	int  age;
	char email[128];
};
typedef struct _People People;

int main()
{
	People p = { "kim", 20, "unknown" };

	People peo_arr[3] = { {"kim", 20, "unknown"},
						  {"lee", 15, "unknown"} };

	// 3번째 사람의 이름 입력 받기
	printf("이름 >> ");
	scanf_s("%s", peo_arr[2].name ); // scanf는 2번째 인자로 주소를 보내는데
									 // name은 배열이므로 이름은 1번째요소의 주소
	printf("나이 >> ");
	scanf_s("%d", &(peo_arr[2].age));

	printf("이메일 >> ");
	scanf_s("%s", peo_arr[2].email);

	for (int i = 0 ; i < 3; i++)
	{
		printf("%s, %d, %s\n", peo_arr[i].name, peo_arr[i].age, peo_arr[i].email);
	}
}
