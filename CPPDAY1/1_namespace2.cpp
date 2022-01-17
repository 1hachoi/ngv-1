// 1_namespace1.cpp - 7page
#include <stdio.h>

namespace Audio
{
	void init() {	printf("init Audio Module\n");}
}
namespace Video
{
	void init() {	printf("init Video Module\n");	}
}
void init() {	printf("init global Module\n");}

using Audio::init; // �Լ� �ܺο� �־ �˴ϴ�.

int main()
{
	// namespace ���� ��ҿ� ���� �ϴ� 3���� ��� - 8page
	Audio::init(); // 1. ������ �̸� ���

//	using Audio::init; // 2. using ����(declaration) ���
					   // Audio:: ����  "Audio::init" ��밡��.
	init();		// audio::init
	::init();   // global init


	using namespace Audio; // 3. using ���þ�(directive)
						// Audio �̸������� ��� ������
						// Audio:: ���� ���� ����
	init();
}






