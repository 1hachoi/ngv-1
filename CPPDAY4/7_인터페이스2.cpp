#include <iostream>


// ���� ����(loosely coupling )

// �ϳ��� Ŭ������ �ٸ� Ŭ���� ����
// ��Ģ�� ��� �������̽�(�߻�Ŭ����) �� ����ؼ� ���� �ϴ°�

// Ȯ�强�ְ�, ������, ��ü�� ���� ����

// ��� ����
// ���� ���̽� : ���Ѿ� �ϴ� ��Ģ�� �ִ� ���
// �߻� Ŭ���� : ���Ѿ� �ϴ� ��Ģ�� �ִ� ��� + �ٸ� ����鵵 �ִ� ���

// C++ : �������̽���, �߻� Ŭ������, ��� "�߻�Ŭ���� ����"���� ����
// C#, java : "interface"�� Ű���尡 �ֽ��ϴ�
// interface IBlackBoxCamera 
// {
// }


// Car �� ���ڽ� �����ڵ鰣�� ���Ѿ� �ϴ� ��Ģ�� ���� ���� ����.
// ��Ģ : "��� ���ڽ� ī�޶�� �Ʒ� Ŭ������ ���� �Ļ� �Ǿ�� �Ѵ�." ��� ��������
//        "��� ���ڽ� ī�޶�� �Ʒ� �������̽��� �����ؾ� �Ѵ�." ��� �ϼ���

class IBlackBoxCamera
{
public:
	virtual void StartRecord() = 0;
};



// ���� ��¥ ī�޶�� ������ ī�޶� ����ϴ� �ڵ带 ���� ������� �ִ�.
// "��Ģ"��θ� ����ϸ� �ȴ�.
class Car
{
public:
	void InstallCamera(IBlackBoxCamera* p) { p->StartRecord(); }
};


// ��� ������ ���ڽ� �����ڴ� ��Ģ�� ���Ѿ� �Ѵ�.

class Camera : public IBlackBoxCamera
{
public:
	void StartRecord() override { std::cout << "start record" << std::endl; }
};

class FHDCamera : public IBlackBoxCamera
{
public:
	void StartRecord() override { std::cout << "start record FHD" << std::endl; }
};

class UHDCamera : public IBlackBoxCamera
{
public:
	void StartRecord() { std::cout << "start record UHD" << std::endl; }
};

int main()
{
	Car c;
	Camera cam;
	c.InstallCamera(&cam);

	FHDCamera fhdcam;
	c.InstallCamera(&fhdcam);

	UHDCamera uhdcam;
	c.InstallCamera(&uhdcam);
}






// 3:00 ���� �̾����ϴ�.