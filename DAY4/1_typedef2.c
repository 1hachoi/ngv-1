typedef int int32;   // ����� �ʽ��ϴ�.
typedef int P[3];    // ?? ����� ?

// typedef : "���� �ڸ��� �ִ� �ɺ��� ������ �ƴ� Ÿ������ ����ڴٴ� �ǹ�"

int n;				// int �� Ÿ��, n�� ����
int arr1[3];
int arr2[3][2];

typedef int n;				
typedef int arr1[3];
typedef int arr2[3][2];

int main()
{
	n a; // int a
	arr1 x; // int x[3]

	arr2 y; // int y[3][2]

	arr2 z = { 1,2,3,4,5,6 };
	z[0][0] = 10;
}