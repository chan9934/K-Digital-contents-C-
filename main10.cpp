#include <iostream>
#include "employeestruct.h"
#include "CircleClass.h"


using namespace std;


//struct C2dType //Circle 2d Type
//{
//
//	double x, y;
//};
//
//struct CircleType 
//	//  ����ü Circle type�� ���� a�� ����Ͽ� raidus ��� circle a ���� -> a.radius
//{
//	C2dType center;
//	double radius;
//};
//
//double circleArea(CircleType c) // c ����ü�� radius�� ��� -> c.radius
//{
//	// ������ * ������ * PI -> ���� ����
//	return c.radius * c.radius * PI;
//}
//
//double getDistance(CircleType c1, CircleType c2) // c1 ����ü�� center ����ü�� x�� ��� ->c1.center.x 
//{
//	// ��Ÿ����� ���� : �ظ�^2 + ����^2 = ����^2
//	double dx = c1.center.x - c2.center.x;
//	double dy = c1.center.y - c2.center.y;
//	double dCntr = sqrt(dx * dx + dy * dy); //sqrt : ������
//	return dCntr;
//}
//
//bool IsOverlapped(CircleType c1, CircleType c2)
//{
//	double distance = getDistance(c1, c2);
//	return (distance < c1.radius + c2.radius);
//}
int main()
{

	/*CircleType c1, c2;
	c1.center.x = 10;
	c1.center.y = 10;
	c1.radius = 10;	
	
	c2.center.x = 30;
	c2.center.y = 30;
	c2.radius = 10;

	bool blsOverlapped = IsOverlapped(c1, c2);
	cout << "IsOverlapped = " << boolalpha << blsOverlapped << noboolalpha << endl;

	Employee aaa;


	return 0;*/

	CircleClass cc1 = { 10, 10, 10 };
	CircleClass cc2 = { 30, 30, 10 };
	bool bIsOverlapped = cc1.IsOverlapped(cc2.circle);
	cout << "Isoverlapped = " << boolalpha << bIsOverlapped << noboolalpha << endl;
}