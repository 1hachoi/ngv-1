#include <iostream>

// C ���� ���� C++ ����ü
// 1. ����ü�� �Լ��� ���� �Ҽ� �ִ�.

// C ��� : ���¸� ��Ÿ���� ����Ÿ(����ü)�� ����Ÿ�� �����ϴ� �Լ��� �и��Ǿ� �ִ�.
//         �׻� �Լ� ���ڷ� ����Ÿ(����ü)�� �޾ƾ� �Ѵ�.

// C++ : ���¸� ��Ÿ���� ����Ÿ�� ���¸� �����ϴ� �Լ��� ����.

struct Rect
{
	// ��� ����Ÿ( �Ǵ� �ʵ�(field))
	int left;
	int top;
	int right;
	int bottom;

	// ��� �Լ�( �Ǵ� �޼ҵ�(method))
	int getArea() {	return (right - left) * (bottom - top);	}
	void draw()   {	std::cout << "Draw Rect" << std::endl;	}
}; 
int main()
{
	Rect rc = { 1,1,10,10 };

//	int n = getRectArea(rc); // C ��Ÿ��
	
	int n = rc.getArea();// C++ ��Ÿ��


	// ���� : ��ü(����)������ ��� ����Ÿ�� ��ü�� �Ѱ� ������
	//	     ��� �Լ��� ��ü�� ������ ������� �Ѱ����� ���̰� �˴ϴ�.
	Rect r1 = { 1,1,2,2};  // r1�� left,top, right, bottom �� ����
	Rect r2 = { 1,1,2,2 }; // r2�� left,top, right, bottom �� ����
					// ������, ��� �Լ��� �Ѱ���.. r1, r2�� ��� ����. 
}





