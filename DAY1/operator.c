// 23 page
#include <stdio.h> 

// 26 page 연산자 정리
int main()
{
    // 1. 모든 연산자는 우선순위가 있다.
    // 2. 모든 연산자는 결합방향이 있다.
    int n1 = 3 + 4;     // +는 이항 연산자
    int n2 = 3 + 4 * 2;
    int n3 = 3 + 4 + 2;

    // 주요 연산자 정리
    // 1. 나누기 
    // 주의 : 정수 / 정수의 결과는 항상 정수
    int    n = 10 / 3;
//  double d = 10 / 3;
    double d = 10.0 / 3;

    printf("n = %d\n", n);
    printf("d = %f\n", d);

    // 2. % 연산자가 아주 널리 사용 - 나눗셈의 나머지 구하기
    n = 10 % 3;
    n = 10 % 2; // 짝수 홀수 조사시 사용
    printf("n = %d\n", n);

    // 3. 전위형 ++, 후위형 ++의 차이점
    // ++ : 정수형 변수의 값을 1증가 : ++n => n = n + 1
    n1 = 3;
    n2 = 3;
    int r1 = ++n1; // n1증가먼저하고, 증가된 n1을 r1에 넣기
    int r2 = n2++; // n2의 값(3)을 먼저 r2에 넣고,
                    // 마지막으로 n2 증가
    
    printf("%d, %d\n", n1, r1); // 4, 4,
    printf("%d, %d\n", n2, r2); // 4, 3

    // sizeof 는 함수가 아닙니다. - 29page .. 연산자 입니다.
    // printf("A");
    // sizeof(n); // 함수 처럼 보입니다.
    // 연산자가 꼭 기호(+, -) 로만 된것은 아닙니다.

    printf("%d\n", sizeof(n));
    printf("%d\n", sizeof n);
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof int);


    return 0;
}

// github.com/codenuri/ngv  에 매일 매일의 수업소스 올려 놓겠습니다.














