// 1_typedef1.c - 25page

// typedef : Ÿ�Կ� ���� ��Ī(alias)�� ����� ����
// ���� 1. Ÿ���� ���� �̸��� ���� ��Ȯ�ϰ� �Ҽ��� �ִ�.
typedef int   int32;
typedef short int16;
typedef char  int8;

#ifdef __cplusplus    // ���� �����Ϸ��� C++�̶�� �� ��ũ�ΰ� ���ǵǾ��ִ�.
	typedef bool BOOL;
	#define TRUE  true
	#define FALSE false
#else
	typedef char BOOL;
	#define TRUE  1
	#define FALSE 0
#endif

int main()
{
	int32 n1;  // int n1
	int8  n2;  // char n2

//	bool b; // C++�� �ְ�, C �ֽ� �������� ����.
			// ������, vc ������ �ȵ�.

	BOOL b = TRUE;

//	int n = 65;
//	printf("%d\n", n); // 65
//	printf("%c\n", n); // A
}
