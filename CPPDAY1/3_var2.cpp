// 3_var2.cpp - 20 page - �߿��� ��ȭ

int main()
{
	int n1 = 10;
	int x[3] = {1,2,3};

	// C++11 ���ʹ� ��� ������ ������ {}�� �ʱ�ȭ �����մϴ�.
	// uniform initialization(�ϰ����ʱ�ȭ)��� ����
	// ���� "�߰�ȣ �ʱ�ȭ"��� �մϴ�.
	int n2{ 10 };
	int x2[3]{ 1,2,3 };

	// �Ʒ� ó�� =�� �־ ����
	int n3 = { 10 };
	int x3[3] = { 1,2,3 };

	// = �� ���°� : direct initialization(���� �ʱ�ȭ)
	// = �� �ִ°� : copy   initialization(���� �ʱ�ȭ)
		
	int n4 = 3.4; // ������ ������ ���� �ڵ� �ΰ��� ?
					// C/C++�� ������ ��κ��� ���� ����!!
	int n5{ 3.4 }; // error
	char c{ 300 }; // error. 1byte �� 300�� ������ �����ϴ�.
					// prevent narrow ��� ���� - 21 page
}



