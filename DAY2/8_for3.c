// 8_for3.c
int main()
{
	int cnt = 0;

	for (cnt = 0; cnt < 10; ++cnt)
	{
	}

	// 초기화 문장 생략가능
	cnt = 0;
	for (; cnt < 10; ++cnt)
	{
	}

	// 증가도 생략 가능
	cnt = 0;
	for (; cnt < 10; )
	{
		++cnt;
	}

	// for를 사용한 무한 루프
	for ( ;1; )
	{
	}
	for (;;) // 무한 루프 (while(1)) 과동일
	{	
		// break로 탈출하면 됩니다.
	}

	// 하지만 관례상 무한루프 표기는 "while(1)" 이 제일 좋습니다.
}










