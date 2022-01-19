#include <iostream>

// Car 클래스를 담당한 개발자에게 
// "Car.h" 와 "Car.cpp" 파일을 받은후에..
// 1. 먼저 헤더를 포함하세요
#include "Car.h"

// 그리고 컴파일 시에 아래 처럼 하세요
// A. g++ main.cpp Car.cpp 로 빌드하거나..
// B. visual studio 에서는 "기존 항목 추가"로 2개 파일 추가하세요

int main()
{
	Car c(30);
	std::cout << Car::get_count() << std::endl;
}