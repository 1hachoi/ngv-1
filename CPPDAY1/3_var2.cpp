// 3_var2.cpp - 20 page - 중요한 변화

int main()
{
	int n1 = 10;
	int x[3] = {1,2,3};

	// C++11 부터는 모든 종류의 변수를 {}로 초기화 가능합니다.
	// uniform initialization(일관된초기화)라는 문법
	// 흔이 "중괄호 초기화"라고 합니다.
	int n2{ 10 };
	int x2[3]{ 1,2,3 };

	// 아래 처럼 =이 있어도 가능
	int n3 = { 10 };
	int x3[3] = { 1,2,3 };

	// = 이 없는것 : direct initialization(직접 초기화)
	// = 이 있는것 : copy   initialization(복사 초기화)
		
	int n4 = 3.4; // 에러가 없지만 좋은 코드 인가요 ?
					// C/C++을 제외한 대부분의 언어는 에러!!
	int n5{ 3.4 }; // error
	char c{ 300 }; // error. 1byte 에 300을 담을수 없습니다.
					// prevent narrow 라는 개념 - 21 page
}



