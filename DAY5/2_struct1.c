// 2_struct1.c - 129 page

// ? �� ��� �ؾ� �ұ�� ?
// 1. C����� �Լ��� ��ȯ���� �ϳ��� �����ϴ�.
// 2. 2���̻� �������� "out parameter"�� ����Ѵ�.

void add(int ar, int ai, int br, int bi, int* sr, int* si)
{
	*sr = ar + br;
	*si = ai + bi;
}
int main()
{
	// ���Ҽ� ���� �ڵ带 �ۼ��ϰ� �ִ�.( 3 + 2i)
	int ar = 3, ai = 2; // ���� 2���� �Ѱ��� ���Ҽ� ǥ��
	int br = 2, bi = 5; // 2 + 5i

	int sr = 0, si = 0;

	// �ΰ� ���Ҽ��� ���� ���� ���ô�.
	add(ar, ai, br, bi, &sr, &si);
}
// ����  :�Լ��� ���� ��¥�� �������� ?
//        out parameter �� � ? => int 3���� out parameter �ʿ�

// 3:00 ���� �̾� ���ϴ�.

