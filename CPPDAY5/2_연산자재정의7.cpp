#include <iostream>
#include <string>
#include <vector>

// 라이브러리의 설계자 관점에서는 "연산자 재정의"는 아주 중요한 문법입니다.
// 일반 개발자(라이브러리 사용자)는 "연산자 재정의"를 많이 하지는 않습니다.

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

//	int n = get_element(v, 0); //C 라면
}