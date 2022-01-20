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
		std::cout << getTitle() << "�޴� ���õ�" << std::endl;
		_getch(); 
	}
};

// PopupMenu : ���ý� �����޴��� �����ִ� �޴� - �� ������ �ٽ�
class PopupMenu
{
	std::string title;
	std::vector<MenuItem*> v;
public:
	PopupMenu(const std::string& s) : title(s) {}

	void addMenu(MenuItem* p) { v.push_back(p); }

	// �˾��޴� ���ý� �ؾ����� 
	void command()
	{
		while (1)
		{
			system("cls"); // ȭ�������
			int sz = v.size(); // ���� �޴� ����

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
	MenuItem m1("���", 1);
	MenuItem m2("���", 2);

	PopupMenu pm("�н�");
	pm.addMenu(&m1);
	pm.addMenu(&m2);

	pm.command();
}


