#include <iostream>
#include <string>
#include <vector>
#include <conio.h>

class MenuItem
{
	std::string title;
	int id;
public:
	MenuItem(const std::string& s, int n) : title(s), id(n) {}

	std::string getTitle() const { return title; }
	void command()
	{
		std::cout << getTitle() << "메뉴 선택됨" << std::endl;
		_getch(); 
	}
};

// PopupMenu : 선택시 하위메뉴를 보여주는 메뉴 - 이 예제의 핵심
class PopupMenu
{
	std::string title;
	std::vector<MenuItem*> v;
public:
	PopupMenu(const std::string& s) : title(s) {}

	void addMenu(MenuItem* p) { v.push_back(p); }

	// 팝업메뉴 선택시 해야할일 
	void command()
	{
		while (1)
		{
			system("cls"); // 화면지우기
			int sz = v.size(); // 하위 메뉴 갯수

			for (int i = 0; i < sz; i++)
			{
				std::cout << i + 1 << ". " << v[i]->getTitle() << std::endl;
			}
			std::cout << sz + 1 << ". 종료" << std::endl;

			std::cout << "메뉴를 선택하세요 >> ";

			int cmd;
			std::cin >> cmd;

			if (cmd == sz + 1) // 종료 메뉴 선택
				break;

			if (cmd < 1 || cmd > sz + 1) // 잘못된 입력
				continue;

			v[cmd - 1]->command(); // 선택된 메뉴 실행
		}
	}
};




int main()
{
	MenuItem m1("김밥", 1);
	MenuItem m2("라면", 2);

	PopupMenu pm("분식");
	pm.addMenu(&m1);
	pm.addMenu(&m2);

	pm.command();
}


