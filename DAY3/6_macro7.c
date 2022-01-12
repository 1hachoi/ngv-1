#include <stdio.h>

int main()
{
	int size = 32; // 사용자에게 입력받았다고 가정합니다.

	// 185 page
	// 모든 C/C++ 컴파일러는 자신이 누구인지 매크로로 이미 알려주고 있습니다.
#ifdef __GNUC__
	int score[size];
	printf("gcc\n");
	printf("%d\n", __GNUC__)
#else
	int score[256]; // 안전하다고 생각되는 큰값!
	printf("gcc 아님\n");
#endif
	


}
// 구글 "predefined compiler macro"

