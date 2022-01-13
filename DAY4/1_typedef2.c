typedef int int32;   // 어렵지 않습니다.
typedef int P[3];    // ?? 뭘까요 ?

// typedef : "변수 자리에 있는 심볼을 변수가 아닌 타입으로 만들겠다는 의미"

int n;				// int 는 타입, n은 변수
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