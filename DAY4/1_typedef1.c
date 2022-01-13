// 1_typedef1.c - 25page

// typedef : 타입에 대한 별칭(alias)을 만드는 도구
// 장점 1. 타입의 대한 이름을 보다 명확하게 할수도 있다.
typedef int   int32;
typedef short int16;
typedef char  int8;

#ifdef __cplusplus    // 현재 컴파일러가 C++이라면 이 매크로가 정의되어있다.
	typedef bool BOOL;
	#define TRUE  true
	#define FALSE false
#else
	typedef char BOOL;
	#define TRUE  1
	#define FALSE 0
#endif

int main()
{
	int32 n1;  // int n1
	int8  n2;  // char n2

//	bool b; // C++에 있고, C 최신 버전에도 지원.
			// 하지만, vc 에서는 안됨.

	BOOL b = TRUE;

//	int n = 65;
//	printf("%d\n", n); // 65
//	printf("%c\n", n); // A
}
