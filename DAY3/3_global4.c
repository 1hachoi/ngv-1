// 3_global4.c
// 아래 코드를 평가해 보세요. 
// 좋지 않습니다.
// 1. 모든 함수에서 필요한 경우만 전역변수로 하세요
// 2. 그 외는 함수 인자로 전달하는 것이 좋습니다.
// 3. 달력 예제를 함수로 분리할때  "int days[12] 배열" ==> 전역변수로 해도 됩니다.
int g1;
int g2;

int add()
{
	return g1 + g2;
}
int main()
{
	// 10 + 20 을 하고 싶었다.
	g1 = 10;
	g2 = 20;
	int ret = add(); 
}




