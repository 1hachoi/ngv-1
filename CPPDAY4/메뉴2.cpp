#include <iostream>
#include <string>
#include <vector>
#include <conio.h>

// �޴� ������ : ���ý� ���� �ϴ� �޴� �׸�
class MenuItem
{
	std::string title;
	int id;
public:
	MenuItem(const std::string& s, int n) : title(s), id(n) {}

	std::string getTitle() const { return title; }

	// �޴� ���ý� ȣ��Ǵ� �Լ�
	void command()
	{
		std::cout << getTitle() << "�޴� ���õ�" << std::endl;
		_getch(); // �ƹ�Ű�������� ���
	}
};
int main()
{
	MenuItem m("���", 1);
	m.command();       // �޴� �����ߴٰ� ����
}