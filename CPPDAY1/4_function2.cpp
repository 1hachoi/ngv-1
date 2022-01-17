// function overloading
// 함수인자의 갯수나 타입이 다르면 
// 동일이름의 함수를 2개 이상 만들수 있다.
// 거의 모든 언어가 지원하는 아주 좋은 문법 
// 함수 오버로딩을 지원하지 않는 언어 : C, python
int square(int a)
{
	return a * a;
}
double square(double a)
{
	return a * a;
}
int main()
{
	square(3);
	square(3.4);
}