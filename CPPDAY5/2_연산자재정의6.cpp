#include <iostream>

int main()
{ 
	// endl �� ��ü�� ��� "�Լ� �Դϴ�." - �� ������ ������ ����� ����մϴ�.
	// 191 page
	std::cout << std::endl;

	std::endl( std::cout ); // �� �ڵ尡 �� �ڵ�� �����մϴ�.

	std::cout << std::endl; // cout.operator<<(endl)
						    // cout.operator<<(�Լ�)  => �Լ� �̸��� �Լ� �ּ��ǹ�
							// cout.operator<<(�Լ��ּ�)�� ȣ��Ǵ� ���� �Դϴ�.
	// 192 �Ʒ� �ڽ��� endl ���� �ڵ� �ֽ��ϴ�. ���� �ϼ���.


}



