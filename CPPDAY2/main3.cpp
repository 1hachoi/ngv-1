// 참고 1. 헤더 파일의 확장자는 아무렇게나 해도 된다. 
//		   관례적으로 ".h"
// 2. 컴파일시 헤더 파일은 컴파일러에게 알려주지 않아도 된다.
//    .cpp 에서 #include  하게 되므로


// 방법 1. 헤더 파일에 함수의 구현 까지 있다면 ( add.h)
//         g++ main.cpp   만 하면 된다.

// 방법 2. 헤더 파일에 선언(sub.h)만 있고 함수구현이 "sub.cpp" 에 있다면
//         g++ main.cpp  sub.cpp

#include "add.h"
#include "Sub.h"

int main()
{
	Add(10, 20);
	Sub(10, 20);
}

// g++ main3.cpp sub.cpp

// 결론 : 헤더에는 함수의 구현을 넣지 마세요.
// 헤더          : 함수 선언만
// .cpp(또는 .c) : 함수 구현 

