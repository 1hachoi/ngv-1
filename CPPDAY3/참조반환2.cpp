#include <iostream>
// 참조반환1
struct Point
{
	int x;
	int y;

	~Point() { std::cout << "~Point()" << std::endl; }
};

Point pt = { 1,2 }; // 전역객체(변수)

Point f1()  // return by value
{
	return pt; // pt를 복사한 임시객체가 생성되고
		 	// 그 임시객체가 반환됩니다.
			// 1. 임시객체의 수명은 함수 호출을 하는 문장의 끝에서 파괴 됩니다.
			// 2. 임시객체는 등호의 왼쪽에 놓일수 없다는 특징이 있습니다.
}

Point& f2()  // return by reference : 리턴용 임시객체를 만들지 말고
{				//						pt 자체를 반환해 달라.
	return pt;
}

int main()
{
//	f1().x = 10; // error. 임시객체는 =의 왼쪽에 올수 없습니다.(lvalue 아님)
//	f1();

//	f2();

	f2().x = 10; // ok. ok.. pt.x = 10 의 의미.

	std::cout << pt.x << std::endl;
	std::cout << "---------------------" << std::endl;
}






