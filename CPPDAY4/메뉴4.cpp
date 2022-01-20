#include <iostream>
#include <string>
#include <vector>
#include <conio.h>

// 모든 메뉴의 기반 클래스
class BaseMenu
{
	std::string title;
public:
	BaseMenu(const std::string& s) : title(s) {}

	std::string getTitle() const { return title; }

	// 모든 메뉴는 선택될수 있다.. 
	// 구현은 파생 클래스가 반드시 해야 한다.
	virtual void command() = 0;
};



class MenuItem : public BaseMenu
{
	int id;
public:
	MenuItem(const std::string& s, int n) : BaseMenu(s), id(n) {}

	void command()
	{
		std::cout << getTitle() << "메뉴 선택됨" << std::endl;
		_getch();
	}
};

class PopupMenu : public BaseMenu
{
	std::vector<BaseMenu*> v;
public:
	PopupMenu(const std::string& s) : BaseMenu(s) {}

	void addMenu(BaseMenu* p) { v.push_back(p); }

	void command()
	{
		while (1)
		{
			system("cls"); 
			int sz = v.size(); 

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
	PopupMenu* menubar = new PopupMenu("MENUBAR");
	PopupMenu* p1 = new PopupMenu("해상도변경");
	PopupMenu* p2 = new PopupMenu("색상변경");

	menubar->addMenu(p1);
//	menubar->addMenu(p2);
	p1->addMenu(p2);

	p1->addMenu(new MenuItem("HD",  11));
	p1->addMenu(new MenuItem("FHD", 12));
	p1->addMenu(new MenuItem("UHD", 13));

	p2->addMenu(new MenuItem("RED",   21));
	p2->addMenu(new MenuItem("GREEN", 22));
	p2->addMenu(new MenuItem("BLUE",  23));

	//이제 시작하려면 ??
	menubar->command();
}
// C++ GUI 라이브러리인 MFC, QT 등에 보면 Menu라는 클래스들이 실제 존재 합니다.


// Composite 패턴
// 복합객체는 개별객체를 보관하는데, 복합객체 자신도 보관할수 있다
// 복합객체와 개별객체는 동일한 기반 클래스가 있다.
// (폴더는 파일 뿐 아니라 폴더도 보관한다.)
