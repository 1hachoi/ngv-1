#include <iostream>

// ��� 2. �������� cnt ���
//   => ���������� ��� ��ü�� �����Ѵ�. ���� �ľǰ���.. 
// �׷���.. 
// ���������� ��𼭳� ���ٰ����ϴ�. �������� �ʴ�.
// ���������ڷ� ��ȣ�Ҽ� ������ ? => ���������� ����� �ƴϹǷ� �ȵȴ�.
int cnt = 0;

class Car
{
	int speed;
public:
	Car()  { ++cnt; }
	~Car() { --cnt; }
};

void foo()
{
	cnt = 100;
}
int main()
{
	Car c1, c2;
	foo();

	std::cout << cnt << std::endl; // 2
}


