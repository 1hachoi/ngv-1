// 2_upcasting1- 140
#include <iostream>

class Animal
{
	int age;
public:
	void Cry() {}
};
class Dog : public Animal
{
	int color;
public:
	void setColor(int c) { color = c; }
};
int main()
{
	Dog d;
	Dog* p1 = &d; // ok
//	double* p2 = &d; // error.
					 // ���� (double*)&d ó�� ĳ�����ϸ� �Ǳ� �մϴ�.
					 // ������, �������� ���� ���� �ʴ� �ڵ�.
	Animal* p3 = &d; // ok..
					 // �ٽ� : ��� Ŭ���� �����ͷ� �Ļ� Ŭ������
					 //      ����ų�� �ִ�. "upcasting"
					 //      d �� Dog ������ �޸� ���ʿ��� Animal�� ����
					 //		 ��ӹ��� ����� �����Ƿ�.. "Animal ����̴�"
					 // ==> ��� ��ü���� ����� Ư¡
	//-----------------------------------
	// ������ p3 �� "Animal*" �̹Ƿ�
	// �����Ϸ��� p3�� Animal�� ����Ų�ٰ� �����Ѵ�.
	// Animal�� ����� ��밡���ϴ�.(C++, java, C#)
	p3->Cry();       // ok
	p3->setColor(5); // �ɱ�� ? error

	// p3�� ����Ű�� ���� Dog��� Ȯ���� �ְ�
	// Dog�� ��� ������ �ʿ� �ϸ�
	// ĳ�����ؼ� ���� �մϴ�
	((Dog*)p3)->setColor(5);
			// �׷���, �̼��� p3 ����Ű�� ���� Dog�� �ƴϸ� 
			// ����ð� ���� �߻�.
}

// 1. Animal* �� Dog�� �ּҸ� ������ �ִ�.
// 2. ������ Animal* �δ� Animal ����� ���� ����
// 3. Dog ����� �����Ϸ��� ĳ���� �ʿ�



	// ����.. ���̽��� ������ �ÿ��� ������ ���� �ʰ�, ����ÿ�
	//		�޸� �����ؼ� Dog �� �ƴϸ� runtime error
