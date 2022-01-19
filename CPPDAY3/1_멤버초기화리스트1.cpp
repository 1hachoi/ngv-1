// 1_멤버초기화리스트1
#include <iostream>
#include <string>
// 85 page
class People
{
	std::string name;
	int age;
public:
	// 멤버 초기화 리스트 : 생성자 () 뒤에 :을 적고 멤버를 초기화 하는것
	People(const std::string& n, int a) : name(n), age(a) // 초기화입니다
	{
//		name = n;  // 초기화가 아닌 대입의 코드 입니다.
//		age = a;
	}
};
int main()
{
	People p("kim", 20);

	int n1 = 0; // 초기화. 변수를 만들면서 값을 넣는것

	int n2;     
	n2 = 0;     // 대입 : 변수를 만든후에 넣는것
	// int 타입같은 primitive 타입은 위 n1, n2 코드는 동일한 어셈.

	std::string s1 = "kim"; // std::string s1("kim")
							// 즉, 인자가 한개인 생성자를 한번 호출해서 초기화
	std::string s2;		// 인자가 없는 디폴트 생성자 호출
	s2 = "kim";			// 대입연산자라는 함수가 호출.
}








