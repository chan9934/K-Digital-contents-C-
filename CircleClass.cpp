// class header file�� ��ü���� ����

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

double CircleClass::circleArea() // �Լ� ����
{
	// ������ * ������ * PI ----> ���� ���� ����
	return circle.radius * circle.radius * PI;
}

double CircleClass::getDistance(CircleType target) // �Լ� ����
{
	// ��Ÿ����� ���� : �غ��� ���� + ���̿� ���� = ������ ����
	double dx = circle.center.x - target.center.x;
	double dy = circle.center.y - target.center.y;
	double dCntr = sqrt(dx * dx + dy * dy);//sqrt : ������
	return dCntr;
}

bool CircleClass::IsOverlapped(CircleType target) // �Լ� ����
{
	double distance = getDistance(target);
	return (distance < circle.radius + target.radius);
}