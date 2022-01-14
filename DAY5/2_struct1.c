// 2_struct1.c - 129 page

// ? 를 어떻게 해야 할까요 ?
// 1. C언어의 함수는 반환값이 하나만 가능하다.
// 2. 2개이상 꺼내려면 "out parameter"를 사용한다.

void add(int ar, int ai, int br, int bi, int* sr, int* si)
{
	*sr = ar + br;
	*si = ai + bi;
}
int main()
{
	// 복소수 관련 코드를 작성하고 있다.( 3 + 2i)
	int ar = 3, ai = 2; // 변수 2개로 한개의 복소수 표현
	int br = 2, bi = 5; // 2 + 5i

	int sr = 0, si = 0;

	// 두개 복소수의 합을 구해 봅시다.
	add(ar, ai, br, bi, &sr, &si);
}
// 질문  :함수로 부터 날짜를 꺼내려면 ?
//        out parameter 는 몇개 ? => int 3개의 out parameter 필요

// 3:00 부터 이어 집니다.

