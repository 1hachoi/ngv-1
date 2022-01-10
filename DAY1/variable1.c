// 17 page
#include <stdio.h> 

int main()
{
    // 변수의 선언(메모리할당하고 이름을 부여하는 과정)
    int n;    // 정수, 4바이트, 이름은 n
    double d; // 실수, 8바이트

    // 선언된 변수(할당된 메모리)에 대입
    n = 10;
    d = 3.4;

 //   n2 = 10; // error. 변수 n 는 선언된적이 없음.  

    // 정수 변수에 실수 넣기
    n = 3.6; // C/C++은 3으로 넣는다.(버림)
             // 다른 대부분의 언어는 error
    d = 3;   // 3.0 으로 보관

    n = 10;
    // 변수값 출력 - 17 page
    printf("n = %d\n", n);
    printf("n = %x\n", n);
    printf("n = %4d\n", n);
    printf("n = %04d\n", n);

    printf("d = %f\n", d);

    printf("n = %d d = %f\n", n, d);
   
    printf("n = %d d = %f\n", n); // 잘못사용했다..
                                // 그런데.. 에러가아니다.??
                                // 18page 아래 부분         
  
    return 0;
}














