// 4_function4 - 32 page

int Add1(int a, int b)
{
	return a + b;
}
inline int Add2(int a, int b)
{
	return a + b;
}
int main()
{
	int n1 = Add1(1, 2); // 이 순간 "call Add1" 해서 함수로 이동
	int n2 = Add2(1, 2); // 이 순간 "Add2"이 기계어 코드로 이 부분을 치환
}
// 장점 : 빠르다.
// 단점 : 여러번 치환되면 실행파일 크기가 커질수도 있다.(?)
//		  작은 함수는 오히려 실행파일 크기 감소.
// 
// 매크로     :  문자 치환	, 버그가 많다.(++n등), 전처리기가 처리
// 인라인 함수: 기계어 코드 치환, 버그가 없다.       컴파일러가 처리
// 성능은 모두 치환이므로 유사하다.