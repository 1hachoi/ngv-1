// 1_namespace1.cpp - 7page
#include <stdio.h>

namespace Audio
{
	// ��� Audio ���� �ڵ�(�Լ�, ����ü, ����������)�� �� ������ �ۼ�
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
// global namespace : Ư�� �̸������� ���Ե��� ���� ���.
void init()
{
	printf("init global Module\n");
}

int main()
{
	init();
	Audio::init();
}