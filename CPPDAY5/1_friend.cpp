// 1_friend.cpp - 75 page
class Bike
{
	int gear;
public:

	// friend �Լ��� ��� : ��� �Լ��� �ƴ�����
	//					   private ����� �����Ҽ� �ְ� �ش޶�� �ǹ�.
	// 1. ��� �Լ��� �ϸ� ���� �ʳ��� ? ==> ����� �ϱ� ����ﶧ�� �ֽ��ϴ�(������������)
	// 2. ĸ��ȭ�� ���� �ϹǷ� ������ �ʳ���? => ��, ������ ���� �����Դϴ�.
	//										�ٸ� ���� �����ϴ�.
	friend void foo();
};

void foo()
{
	Bike b;
	b.gear = 10;
}


int main()
{
	foo();
}