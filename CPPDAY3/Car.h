#pragma once // 2번 include되는 것을 막는 기술

// Car.h
class Car
{
	int speed;
	static int cnt;
public:
	Car(int s);    // 1. 초기화 리스트 표기법은 구현 파일에서 해야 합니다.
	~Car();
	static int get_count();
}; 
