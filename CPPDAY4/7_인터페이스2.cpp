#include <iostream>


// 약한 결합(loosely coupling )

// 하나의 클래스가 다른 클래스 사용시
// 규칙이 담긴 인터페이스(추상클래스) 을 사용해서 접근 하는것

// 확장성있고, 유연한, 교체가 능한 설계

// 용어 정리
// 인터 페이스 : 지켜야 하는 규칙만 있는 경우
// 추상 클래스 : 지켜야 하는 규칙만 있는 경우 + 다른 멤버들도 있는 경우

// C++ : 인터페이스건, 추상 클래스건, 모두 "추상클래스 문법"으로 구현
// C#, java : "interface"를 키워드가 있습니다
// interface IBlackBoxCamera 
// {
// }


// Car 와 블랙박스 제작자들간에 지켜야 하는 규칙을 먼저 설계 하자.
// 규칙 : "모든 블랙박스 카메라는 아래 클래스로 부터 파생 되어야 한다." 라고 하지말고
//        "모든 블랙박스 카메라는 아래 인터페이스를 구현해야 한다." 라고 하세요

class IBlackBoxCamera
{
public:
	virtual void StartRecord() = 0;
};



// 아직 진짜 카메라는 없지만 카메라를 사용하는 코드를 먼저 만들수도 있다.
// "규칙"대로만 사용하면 된다.
class Car
{
public:
	void InstallCamera(IBlackBoxCamera* p) { p->StartRecord(); }
};


// 모든 종류의 블랙박스 제작자는 규칙을 지켜야 한다.

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






// 3:00 부터 이어집니다.