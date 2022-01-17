// 33 page
/*
int square(int a)
{
	return a * a;
}
double square(double a)
{
	return a * a;
}
*/

// 아래 코드는 함수가 아니라 함수를 만드는 "틀(template)" 입니다.
template<typename T>
T square(T a)
{
	return a * a;
}

int main()
{
	square<int>(3); // 1. int square(int)  함수가 컴파일 시간에 생성됩니다.
					// 2. 그리고 생성된 함수를 호출
	square<double>(3.4);

	// 함수 템플릿 사용시 타입인자를 생략할수 있습니다.
	// "타입인자" 생략시 "함수인자"로 타입추론
	square(3);
	square(3.4);
}


// Code Bloat(코드 폭팔)
// 템플릿이 너무나 많은 타입의 함수를 생성해서 실행파일 크기가
// 커지는 현상
