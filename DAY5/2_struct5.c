
// 1. �ʿ��� Ÿ���� ���� ���� ����.
struct _Complex
{
	int real;
	int image;
};
typedef struct _Complex Complex;

// 2. ������� Ÿ������ �ڵ带 �ۼ�����.

Complex add(Complex c1, Complex c2)
{
	Complex temp;
	temp.real  = c1.real + c2.real;
	temp.image = c1.image + c2.image;
	return temp;
}
int main()
{
	Complex c1 = { 1,2 }; // 1 + 2i
	Complex c2 = { 2,2 }; // 2 + 2i

	Complex c3 = add(c1, c2);
}


