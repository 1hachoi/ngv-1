#include <stdio.h>

int main()
{
	// for 문 사용시 반복변수를 만드는 2가지 형태
	// 1. 외부에서 선언후 사용
	int cnt = 0;     
	for (cnt = 0; cnt < 10; ++cnt)
	{
	}
	// 2. for 문안에서 만드는 경우.
	// for 반복문 종료시 i는 파괴
	for (int i = 0; i < 10; i++)
	{
	}

//	i = 0; // error, i는 파괴되었다.

	// i는 이미 파괴 되었으므로 아래처럼 다시 만들어서 사용해도 됩니다.
	for (int i = 0; i < 10; i++)
	{
	}

}




