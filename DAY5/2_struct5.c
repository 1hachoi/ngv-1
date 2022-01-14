
// 1. 필요한 타입을 먼저 설계 하자.
struct _Complex
{
	int real;
	int image;
};
typedef struct _Complex Complex;

// 2. 만들어진 타입으로 코드를 작성하자.

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


