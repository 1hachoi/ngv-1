// 7_�������̽�1 - 171 page
#include <iostream>

// 172 page
// ���� ����(tightly coupling )
// �ϳ��� Ŭ������ �ٸ� Ŭ���� ����
// Ŭ���� �̸��� ���� ����ϴ� ��

// ��ü �Ұ����� ������ ������
// Ȯ�强�� ����.




class Camera
{
public:
	void StartRecord() { std::cout << "start record" << std::endl; }
};
// �̷��� ���ο� ī�޶� ����
class FHDCamera
{
public:
	void StartRecord() { std::cout << "start record FHD" << std::endl; }
};

class Car
{
public:
	void InstallCamera(Camera* p)    { p->StartRecord(); }
	void InstallCamera(FHDCamera* p) { p->StartRecord(); }
};

int main()
{
	Car c;
	Camera cam;
	c.InstallCamera(&cam);

	FHDCamera fhdcam;
	c.InstallCamera(&fhdcam);

}






