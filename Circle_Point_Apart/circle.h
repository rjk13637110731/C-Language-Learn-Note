#pragma once//防止头文件重复包含
#include <iostream>//标准输出流
using namespace std;
#include "point.h"

//圆类
class Circle {
private:
	Point c_Center;
	double c_r;
public:
	void setC_r(double r);
	double getC_r();
	void setCenter(Point center);
	Point getCenter();
};