#pragma once // 2�� include�Ǵ� ���� ���� ���

// Car.h
class Car
{
	int speed;
	static int cnt;
public:
	Car(int s);    // 1. �ʱ�ȭ ����Ʈ ǥ����� ���� ���Ͽ��� �ؾ� �մϴ�.
	~Car();
	static int get_count();
}; 
