// 함수 삭제 문법(C++11 부터) - 35 page

// gcd(double, double)을 제공하지 않으면
// => 인자의 암시적 형변환에 따라 gcd(int, int) 호출될수 있다.


// 최대 공약수를 구하는 함수를 생각해 봅시다.
int gcd(int a, int b)
{
	return 0; // 최대 공약수라고 가정..
}

//double gcd(double a, double b); // double 버전을 선언만 한다.
								// 의도적으로 구현을 제공 하지 않는다.
							// 사용하면 "링크에러"를 발생하겠다는 의도.

double gcd(double a, double b) = delete; // C++11에서 도입된
								// 함수 삭제라는 문법
							// 사용하면 "컴파일에러"를 발생하겠다는 의도.

int main()
{
	gcd(8, 12); 
	gcd(2.1, 12.3);
}