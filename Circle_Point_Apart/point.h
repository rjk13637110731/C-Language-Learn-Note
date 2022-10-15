#pragma once//防止头文件重复包含
#include <iostream>
using namespace std;

//点类
class Point {
private:
	double p_x;
	double p_y;
public:
	void setP_x(double x);

	double getP_x();

	void setP_y(double y);

	double getP_y();
};