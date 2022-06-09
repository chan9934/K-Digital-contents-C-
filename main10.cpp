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
//	//  구조체 Circle type의 변수 a를 사용하여 raidus 사용 circle a 선언 -> a.radius
//{
//	C2dType center;
//	double radius;
//};
//
//double circleArea(CircleType c) // c 구조체의 radius를 사용 -> c.radius
//{
//	// 반지름 * 반지름 * PI -> 원의 넓이
//	return c.radius * c.radius * PI;
//}
//
//double getDistance(CircleType c1, CircleType c2) // c1 구조체의 center 구조체의 x를 사용 ->c1.center.x 
//{
//	// 피타고라스의 정리 : 밑면^2 + 높이^2 = 빗변^2
//	double dx = c1.center.x - c2.center.x;
//	double dy = c1.center.y - c2.center.y;
//	double dCntr = sqrt(dx * dx + dy * dy); //sqrt : 제곱근
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