// 3_객체와포인터
#include <iostream>
#include <vector>

class Shape
{
	int color;
};
class Rect : public Shape {};
class Circle : public Shape {};
//----------------------------------
int main()
{
	int n = 0;
//	Shape* arr[10];

	std::vector<Shape*> v(10);

	int count = 0;

	while (1)
	{
		std::cin >> n;

		if (n == 1)
		{
			v[count] = new Rect;
			++count;

			if (v.size() < count)
			{
				v.resize( count + 4 );
			}
		}
		else if (n == 2) 
		{
			v[count] = new Circle;
			++count;
			if (v.size() < count)
			{
				v.resize(count + 4);
			}
		}
	}
}