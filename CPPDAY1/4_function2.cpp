// function overloading
// �Լ������� ������ Ÿ���� �ٸ��� 
// �����̸��� �Լ��� 2�� �̻� ����� �ִ�.
// ���� ��� �� �����ϴ� ���� ���� ���� 
// �Լ� �����ε��� �������� �ʴ� ��� : C, python
int square(int a)
{
	return a * a;
}
double square(double a)
{
	return a * a;
}
int main()
{
	square(3);
	square(3.4);
}