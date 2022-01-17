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

using Audio::init; // 함수 외부에 있어도 됩니다.

int main()
{
	// namespace 안의 요소에 접근 하는 3가지 방법 - 8page
	Audio::init(); // 1. 완전한 이름 사용

//	using Audio::init; // 2. using 선언(declaration) 사용
					   // Audio:: 없이  "Audio::init" 사용가능.
	init();		// audio::init
	::init();   // global init


	using namespace Audio; // 3. using 지시어(directive)
						// Audio 이름공간의 모든 내용을
						// Audio:: 없이 접근 가능
	init();
}






