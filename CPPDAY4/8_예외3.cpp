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
		std::cout << "네트워크 예외 발생" << std::endl;
	}
	catch ( const MemoryException& e)
	{
		std::cout << "메모리 예외 발생" << std::endl;
	}
	catch (const Exception& e)
	{
		std::cout << "메모리 예외 발생" << std::endl;
	}

	std::cout << "계속 실행" << std::endl;
}





