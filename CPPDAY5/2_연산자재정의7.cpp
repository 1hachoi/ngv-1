#include <iostream>
#include <string>
#include <vector>

// ���̺귯���� ������ ���������� "������ ������"�� ���� �߿��� �����Դϴ�.
// �Ϲ� ������(���̺귯�� �����)�� "������ ������"�� ���� ������ �ʽ��ϴ�.

class string
{
public:
	string operator+(const string& s) {...}
};
template<typename T> 
class vector
{
public:
	T& operator[](int idx) { ... }
};
int main()
{
	std::string s1 = "AAA";
	std::string s2 = "BBB";

	std::string s3 = s1 + s2; // s1.operator+(s2)

	std::vector<int> v = { 1,2,3 };

	int n = v[0];  // int n = v.operator[](0)

//	int n = get_element(v, 0); //C ���
}