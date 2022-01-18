// square.h ���弼��
// extern "C" : C++ �����Ϸ����� ���� �Լ��� C�� ������� �Լ����
//			   �˷��ִ� ���þ�.

// C�� C++���� ��� ����ϴ� ����� �Ʒ� ó�� �ۼ��Ǿ�� �մϴ�.
// ��� C++ �����Ϸ����� "__cplusplus" �� ���� �Ǿ� �ֽ��ϴ�.

#ifdef __cplusplus
extern "C" {
#endif 

	int square(int a);

#ifdef __cplusplus
}
#endif 

// name mangling : C++ �����Ϸ��� �Լ��̸��� �������� �����ϴ� ����
//		�Լ� �����ε��� �����ϱ� ����.  godbolt.org���� �� Ȯ���غ�����.

// g++ -x c square.c  -x cpp main.cpp



// square.c  ���弼��. �ݵ�� .c �� �ϼ���
int square(int a)
{
	return a * a;
}

// main4.c => �ݵ�� .c�� �ϼ���
#include "square.h"

int main()
{
	square(3);
}
// g++�� ������ ��� ������ ������.
// g++ main4.c square.c

