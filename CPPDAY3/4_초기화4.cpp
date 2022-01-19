class Test
{
	int data = 0; // ok.. C++11 부터 가능
//	static int cnt = 0; // error. static 멤버는 여기서 초기화 안됩니다.
	static int cnt;

	static const int count = 0; // 이건됩니다. 
							// static const int 라는 문법이 있습니다
							// 외부 선언도 없어도 됩니다.
							// 물론, 외부 선언해도 됩니다.
};
int Test::cnt = 0; // 여기서 해야 합니다.

int main()
{

}