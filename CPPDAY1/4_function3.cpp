// 33 page
/*
int square(int a)
{
	return a * a;
}
double square(double a)
{
	return a * a;
}
*/

// �Ʒ� �ڵ�� �Լ��� �ƴ϶� �Լ��� ����� "Ʋ(template)" �Դϴ�.
template<typename T>
T square(T a)
{
	return a * a;
}

int main()
{
	square<int>(3); // 1. int square(int)  �Լ��� ������ �ð��� �����˴ϴ�.
					// 2. �׸��� ������ �Լ��� ȣ��
	square<double>(3.4);

	// �Լ� ���ø� ���� Ÿ�����ڸ� �����Ҽ� �ֽ��ϴ�.
	// "Ÿ������" ������ "�Լ�����"�� Ÿ���߷�
	square(3);
	square(3.4);
}


// Code Bloat(�ڵ� ����)
// ���ø��� �ʹ��� ���� Ÿ���� �Լ��� �����ؼ� �������� ũ�Ⱑ
// Ŀ���� ����
