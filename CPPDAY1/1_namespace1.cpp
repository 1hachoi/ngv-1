// 1_namespace1.cpp - 7page
#include <stdio.h>

namespace Audio
{
	// 모든 Audio 관련 코드(함수, 구조체, 전역변수등)는 이 곳에서 작성
	void init()
	{
		printf("init Audio Module\n");
	}
}
namespace Video
{
	void init()
	{
		printf("init Video Module\n");
	}
}
// global namespace : 특정 이름공간에 포함되지 않은 경우.
void init()
{
	printf("init global Module\n");
}

int main()
{
	init();
	Audio::init();
}