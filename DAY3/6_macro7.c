#include <stdio.h>

int main()
{
	int size = 32; // ����ڿ��� �Է¹޾Ҵٰ� �����մϴ�.

	// 185 page
	// ��� C/C++ �����Ϸ��� �ڽ��� �������� ��ũ�η� �̹� �˷��ְ� �ֽ��ϴ�.
#ifdef __GNUC__
	int score[size];
	printf("gcc\n");
	printf("%d\n", __GNUC__)
#else
	int score[256]; // �����ϴٰ� �����Ǵ� ū��!
	printf("gcc �ƴ�\n");
#endif
	


}
// ���� "predefined compiler macro"

