#pragma once
#include <iostream>

const double PI = 3.141592;

struct C2dType//Circle 2D Type
{
	double x, y;
};

struct CircleType
{
	C2dType center;
	double radius;
};

class CircleClass
{
public://모든 곳에서 접근할수 있음
	//->public 영역
	CircleClass(double x, double y, double radiu);
	~CircleClass();//파괴자

	void initialize(double x, double y, double radius);
	double circleArea(); //면적 구하기 기능
	double getDistance(CircleType target); // target과의 거리구하기 기능
	bool IsOverlapped(CircleType target); // target과 오버랩 되어있는지 채크하는 기능

	CircleType circle;;

	//<-public 영역
private://다른 곳에서 접근할수 없음
	//->private 영역

	//<-private 영역
protected://자식까지는 접근할수 있음
	//->protected 영역

	//<-protected 영역
public://모든 곳에서 접근할수 있음
	//->public 영역

	//<-public 영역
};