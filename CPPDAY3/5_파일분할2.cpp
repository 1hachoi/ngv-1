#include <iostream>

// Car Ŭ������ ����� �����ڿ��� 
// "Car.h" �� "Car.cpp" ������ �����Ŀ�..
// 1. ���� ����� �����ϼ���
#include "Car.h"

// �׸��� ������ �ÿ� �Ʒ� ó�� �ϼ���
// A. g++ main.cpp Car.cpp �� �����ϰų�..
// B. visual studio ������ "���� �׸� �߰�"�� 2�� ���� �߰��ϼ���

int main()
{
	Car c(30);
	std::cout << Car::get_count() << std::endl;
}