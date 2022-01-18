int main()
{
	int n = 10;

	// 다음중 에러는 ?
	int* p; // 1. ok.. 단, 초기값이 없으므로 쓰레기값
//	int& r; // 2. error. reference는 반드시 초기화 되어야 합니다.
	int& r = n;

	int& r1 = r; // 됩니다.  이건 r1도 n의 별명이라는 의미..

	int& & r2 = r; // 이건 안됩니다. n의 별명이 아닌 r의 별명 r2는 만들수 없습니다.
					// error
}