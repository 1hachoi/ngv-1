// 2_io2.cpp- 16page �Ʒ�
#include <iostream> // �� ����� ������ printf �� ��밡��
#include <iomanip>   // cout �� ��� ���¸� �����ϴ� ��������
					// io manipulator ��� �մϴ�. - 16page �߰��ڽ�����
int main()
{
	int n = 10;
	printf("%x\n", n); // 16������

	std::cout << n << std::endl; // 10����		
	std::cout << std::hex << n << std::endl; // 16 ����	
	std::cout << std::dec << n << std::endl;

	std::cout << std::setw(10) << n << std::endl; // 10�ڸ��� ���缭.
}