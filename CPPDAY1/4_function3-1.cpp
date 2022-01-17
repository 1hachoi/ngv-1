#include <iostream> 

template<typename T>
T square(T a)
{
	return a * a;
}

int main()
{
	square(3); // �� �ڵ带 ���� square()�� �Լ���� ���� �ϴ� ��찡 �ֽ��ϴ�.
			   // square�� �Լ��� �ƴմϴ�.
			   // square<int>(3);

	// �Լ� �ּҸ� ������ ���ô�.
//	printf("%p\n", &square); // �ɱ�� ? error
	printf("%p\n", &square<int>); // ok.. �̰� �Լ��� �ּ� �Դϴ�.
	printf("%p\n", &square<double>); // ok.. �̼��� square<double>�������ϰ�
									// �ּ� ���
}


