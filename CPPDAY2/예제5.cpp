// 객체 지향 : 타입을 먼저 만들자
// 장점      : 이미 만들어진 타입을 사용하면 "코드 재사용"을 최대화 할수 있다
#include <iostream>
#include <vector>    

int main()
{
	std::vector<int> v; //크기가 0인 동적배열(vector)

	int n = 0;

	while (1)
	{
		std::cin >> n;
		if (n == -1) break;

		v.push_back(n); // 자동으로 메모리가 증가하면서 들어 갑니다.
	}
	std::cout << v.size() << " 만큼 입력했습니다." << std::endl;
}


