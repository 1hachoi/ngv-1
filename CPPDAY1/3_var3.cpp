// 21 page auto �̾߱�
int main()
{
	double x[3] = { 1,2,3 };

//	double n = x[0];

	// auto :   �캯�� ǥ�������� �º��� Ÿ���� ������ �޶�.
	//		    �����Ϸ��� Ÿ�� ����
	//			C++11 ���� ����
	auto n = x[0]; // double n = x[0]
	auto p = &n;   // p�� Ÿ���� ? double* p = &n;


	const int c = 10;
	auto a = c; // a�� Ÿ���� ?
				// 1. int     2. const int
				// ���� 1

	// decltype : () ���� ǥ������ Ÿ���� ������ �޶�. C++11
	int n3 = 0;
	decltype(n3) n4;		// int n4
	decltype(n3 + 3.4) d;	// double   d; 

	// auto�� ���� ������� �˰ڽ��ϴ�.
	// decltype�� ���� ����ϳ��� ?? => ������ �ڵ常�鶧�� ����
									// �ַ� ���ø�
}