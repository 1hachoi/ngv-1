#include <iostream>

class Exception {};

class MemoryException : public Exception
{
	int errorid = 0;
public:
};
class DisconnectedWifi
{
	int data = 0;
};
int ConnectServer()
{
	if (1)
	{
		DisconnectedWifi e;
		throw e;
	}

	return 0;
}

void hoo()
{
	ConnectServer();
}
int main()
{
	try
	{
//		throw e;
		int ret = ConnectServer();
//		hoo();
		//...
	}
	catch ( const DisconnectedWifi& e)
	{
		std::cout << "��Ʈ��ũ ���� �߻�" << std::endl;
	}
	catch ( const MemoryException& e)
	{
		std::cout << "�޸� ���� �߻�" << std::endl;
	}
	catch (const Exception& e)
	{
		std::cout << "�޸� ���� �߻�" << std::endl;
	}

	std::cout << "��� ����" << std::endl;
}





