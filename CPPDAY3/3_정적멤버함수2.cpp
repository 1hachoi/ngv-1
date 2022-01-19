// 3_정적멤버함수2 - 116 page
class Test
{
	int data;
	static int cnt;
public:
	// 다음중 에러를 모두 고르세요. 
	// static 멤버 데이타, static 멤버 함수의 특징을 정확히 알면 됩니다

	// 핵심 : static 멤버 함수 에서는 static 멤버만 접근 가능합니다.
	static void foo()
	{
		data = 0;  // 1 error. 객체가 있어야 메모리에 있다
		cnt = 0;   // 2 ok. 객체가 없어도 메모리에 있다.
	}
	// non static 멤버 함수는 모든 멤버에 접근 가능
	void goo()
	{
		data = 0; // 3 ok
		cnt = 0;  // 4 ok
	}
};
int Test::cnt = 0;

int main()
{
	Test::foo(); // static 멤버 함수는 객체없이 호출가능
	Test t;
	t.foo();
}