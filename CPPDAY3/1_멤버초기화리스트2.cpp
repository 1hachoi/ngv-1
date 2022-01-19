// 1_멤버초기화리스트2

class Test
{
	const int c; // 상수를 멤버 데이타로 가질때
public:
	Test(int n) : c(n)
	{
//		c = n; // 될까요 ?
	}
};
int main()
{
	Test t(10);

	const int c1 = 10; // 초기화 가능

	const int c2; // error
	c2 = 10; // error
}