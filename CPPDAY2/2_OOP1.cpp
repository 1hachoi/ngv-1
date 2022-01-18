// 2_OOP1 - 57
#include <iostream>

// 사각형의 면적을 구하고, 그림을 그리는 함수를 생각해 봅시다.
int getRectArea(int x1, int y1, int x2, int y2)
{
	return (x2 - x1) * (y2 - y1);
}
void drawRect(int x1, int y1, int x2, int y2)
{
	std::cout << "Draw Rect" << std::endl;
}
int main()
{
	int n = getRectArea(1, 1, 10, 10);
}