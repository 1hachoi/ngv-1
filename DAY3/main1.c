// main1.c

// C/C++언어 표준에서 정의한 main 함수의 모양은 4가지 입니다.
// 아래 4개중 어떠한 모양으로라도 한개만 만들면 됩니다.
void main()
int  main()
void main(int argc, char** argv)
int  main(int argc, char** argv)

// 항상 "C표준 문서"를 읽는 습관을 가지세요.
// 구글에서 "C standard pdf" 검색해 보세요

// 일부 OS에서 일부 컴파일러는 다른 모양도 지원 합니다.
// 맥 OS 에서 xcode 는 아래 모양도 지원
// 표준 아닙니다. 맥용 프로그램에서만 지원
int  main(int argc, char** argv, char** environment)
