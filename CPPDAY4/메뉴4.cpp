#include <iostream>
#include <string>
#include <vector>
#include <conio.h>

// ��� �޴��� ��� Ŭ����
class BaseMenu
{
	std::string title;
public:
	BaseMenu(const std::string& s) : title(s) {}

	std::string getTitle() const { return title; }

	// ��� �޴��� ���õɼ� �ִ�.. 
	// ������ �Ļ� Ŭ������ �ݵ�� �ؾ� �Ѵ�.
	virtual void command() = 0;
};



class MenuItem : public BaseMenu
{
	int id;
public:
	MenuItem(const std::string& s, int n) : BaseMenu(s), id(n) {}

	void command()
	{
		std::cout << getTitle() << "�޴� ���õ�" << std::endl;
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
			std::cout << sz + 1 << ". ����" << std::endl;

			std::cout << "�޴��� �����ϼ��� >> ";

			int cmd;
			std::cin >> cmd;

			if (cmd == sz + 1) // ���� �޴� ����
				break;

			if (cmd < 1 || cmd > sz + 1) // �߸��� �Է�
				continue;

			v[cmd - 1]->command(); // ���õ� �޴� ����
		}
	}
};




int main()
{
	PopupMenu* menubar = new PopupMenu("MENUBAR");
	PopupMenu* p1 = new PopupMenu("�ػ󵵺���");
	PopupMenu* p2 = new PopupMenu("���󺯰�");

	menubar->addMenu(p1);
//	menubar->addMenu(p2);
	p1->addMenu(p2);

	p1->addMenu(new MenuItem("HD",  11));
	p1->addMenu(new MenuItem("FHD", 12));
	p1->addMenu(new MenuItem("UHD", 13));

	p2->addMenu(new MenuItem("RED",   21));
	p2->addMenu(new MenuItem("GREEN", 22));
	p2->addMenu(new MenuItem("BLUE",  23));

	//���� �����Ϸ��� ??
	menubar->command();
}
// C++ GUI ���̺귯���� MFC, QT � ���� Menu��� Ŭ�������� ���� ���� �մϴ�.


// Composite ����
// ���հ�ü�� ������ü�� �����ϴµ�, ���հ�ü �ڽŵ� �����Ҽ� �ִ�
// ���հ�ü�� ������ü�� ������ ��� Ŭ������ �ִ�.
// (������ ���� �� �ƴ϶� ������ �����Ѵ�.)
