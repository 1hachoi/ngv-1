#include <iostream>
#include <vector>
#include <list>
#include <set> 
#include <deque> // "��" �Ǵ� "��ť" ��� ���� �մϴ�.

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6, 7, 8, 9, 10 };
	std::list<int>   s = { 1,2,3,4,5,6, 7, 8, 9, 10 };
	std::deque<int>  d = { 1,2,3,4,5,6, 7, 8, 9, 10 };

	// [] �����ڴ� ���ӵ� �޸� �����̳ʸ� �����մϴ�.
	v[0] = 10; // ok
//	s[0] = 20; // error
	d[0] = 20; // ok.

	d.push_back(0); // ok. deque �� ���� ���� ����

	// 1. [] �� ����ϰ� ������, ������� �ʿ� ����. : vector
	// 2. [] �� ����ϰ� ������, ������� �ʿ� �ϴ�. : deque
	// 3. [] �ʿ� ����, ���Ի����� ����. : list

	// 4. �˻��� �߿��ϰ�, ũ�����ĵ� �ʿ� �ϴ�. : tree ( set )
	// 5. �˻��� ���� �߿��ϰ�, ũ�����ĵ� �ʿ� ���� : hash ( unordered_set)

	std::list<int> s2 = { 1,2,3 };
//	std::vector<int> v2(s2);
	std::vector<int> v2(s2.begin(), s2.end());

	std::vector< std::list<int> > v3(5);

	v3[0].push_back(10);
	v3[0].push_back(20);
	v3[0].push_back(30);

	v3[1].push_back(1);
	v3[1].push_back(2);

	std::vector< std::vector<int> > matrix(3, std::vector<int>(3) );

	matrix[0][0] = 10;
	matrix[1][2] = 10;
	matrix[2][1] = 10;

}





