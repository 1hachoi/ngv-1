// 26 page ���ڿ�
#include <iostream>
#include <string>

int main()
{
	char s1[] = "ABCD"; // C���� char �迭�� ���ڿ� ǥ��

	// C++ ������ "string Ÿ��(Ŭ������ ���� Ÿ��)"�� ���
	std::string s2 = "hello";
	std::string s3 = "hello";

	// ������ ���� ó�� ����ϸ� �˴ϴ�.
	if (s2 == s3) {}  // �迭�̶�� if ( strcmp(s2, s3) == 0 )
	s2 = s3;          // �迭�̶�� strcpy(s2, s3)

	auto s4 = s2 + s3;

	std::cout << s4 << std::endl; // "hellohello"

}
