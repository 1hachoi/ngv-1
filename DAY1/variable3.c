// 23 page
#include <stdio.h> 

int main()
{
    int n = 10;

    printf("%d\n", n); //변수가 가진 값
    printf("%d\n", sizeof(n) );  // 변수가 사용하는 메모리 크기
    printf("%d\n", &n);  // 변수의 메모리 주소   
    printf("%x\n", &n);  // 변수의 메모리 주소  
    printf("%p\n", &n);  // 변수의 메모리 주소  => 주소는 항상 "%p" 로하세요

        // 현재 64비트 CPU 이므로  주소의 크기는 64비트(8byte) 

    // 24 page

    double area = 3 * 3 * 3.14;  // 원의 면적 구하기.

    const double pi = 3.14;  // 변수가 아닌 상수 만들기..
                             // 변경하려고 하면 에러 발생
    
//    pi = 10; // 변경하면 안되는데 실수 했다. 상수로 만들었다면 error

//    double area = 3 * 3 * pi; // 3.14 보다 pi 가 가독성이 좋다.

    const int c; // 될까요? error. 상수는 반드시 초기값이 필요합니다
                // 정확히는
                // C언어는 경고(warning), 컴파일러 옵션을 지정해서 error로 변경가능
                // C++ 및 다른 언어 : 모두 컴파일 에러

                // C언어는 엄격하게 컴파일 하지 않는다.() 
                // C++은 아주 엄격하게 컴파일.

    return 0;
}














