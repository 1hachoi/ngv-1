int main()
{
	int n = 10;
	double d = 3.4;
	
	double *p1 = &n;

	// 앞으로 p1이 가리키는 곳은
	// "double"이 있다고 생각하겠다는것
	*p1 = 3.4; // 이 한줄을 평가해 보세요
				// access violation.. runtime 오류
				// 죽게 됩니다.

	d = 3.4;

	int *p2 = &d;
	*p2 = 20;      // 8바이트 메모리를 4바이트만 접근하므로
				   // access violation 은 아닙니다.
					// 그런데, 실수를 보관하기로한 메모리를
					// 정수처럼 접근하는 것은 좋지 않습니다.

	printf("%f\n", d);
}