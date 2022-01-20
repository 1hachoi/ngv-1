#include <iostream>
#include <string>
#include <vector>
#include <conio.h>

// 메뉴 아이템 : 선택시 일을 하는 메뉴 항목
class MenuItem
{
	std::string title;
	int id;
public:
	MenuItem(const std::string& s, int n) : title(s), id(n) {}

	std::string getTitle() const { return title; }

	// 메뉴 선택시 호출되는 함수
	void command()
	{
		std::cout << getTitle() << "메뉴 선택됨" << std::endl;
		_getch(); // 아무키나누를때 대기
	}
};
int main()
{
	MenuItem m("김밥", 1);
	m.command();       // 메뉴 선택했다고 가능
}