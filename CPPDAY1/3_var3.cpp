// 21 page auto 이야기
int main()
{
	double x[3] = { 1,2,3 };

//	double n = x[0];

	// auto :   우변의 표현식으로 좌변의 타입을 결정해 달라.
	//		    컴파일러가 타입 결정
	//			C++11 에서 등장
	auto n = x[0]; // double n = x[0]
	auto p = &n;   // p의 타입은 ? double* p = &n;


	const int c = 10;
	auto a = c; // a의 타입은 ?
				// 1. int     2. const int
				// 답은 1

	// decltype : () 안의 표현식의 타입을 결정해 달라. C++11
	int n3 = 0;
	decltype(n3) n4;		// int n4
	decltype(n3 + 3.4) d;	// double   d; 

	// auto는 언제 사용할지 알겠습니다.
	// decltype은 언제 사용하나요 ?? => 복잡한 코드만들때만 등장
									// 주로 템플릿
}