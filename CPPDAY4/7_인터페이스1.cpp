// 7_인터페이스1 - 171 page
#include <iostream>

// 172 page
// 강한 결합(tightly coupling )
// 하나의 클래스가 다른 클래스 사용시
// 클래스 이름을 직접 사용하는 것

// 교체 불가능한 경직된 디자인
// 확장성이 없다.




class Camera
{
public:
	void StartRecord() { std::cout << "start record" << std::endl; }
};
// 미래에 새로운 카메라 등장
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






