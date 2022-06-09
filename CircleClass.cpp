// class header file에 구체적인 선언

#include "CircleClass.h"


CircleClass::CircleClass(double x, double y, double radius) : circle({ 0 })
{
	initialize(x, y, radius);
}

CircleClass::~CircleClass()
{

}

void CircleClass::initialize(double x, double y, double radius)
{
	circle.center.x = x;
	circle.center.y = y;
	circle.radius = radius;
}

double CircleClass::circleArea() // 함수 생성
{
	// 반지름 * 반지름 * PI ----> 원의 넓이 공식
	return circle.radius * circle.radius * PI;
}

double CircleClass::getDistance(CircleType target) // 함수 생성
{
	// 피타고라스의 정리 : 밑변에 제곱 + 높이에 제곱 = 빗변의 제곱
	double dx = circle.center.x - target.center.x;
	double dy = circle.center.y - target.center.y;
	double dCntr = sqrt(dx * dx + dy * dy);//sqrt : 제곱근
	return dCntr;
}

bool CircleClass::IsOverlapped(CircleType target) // 함수 생성
{
	double distance = getDistance(target);
	return (distance < circle.radius + target.radius);
}