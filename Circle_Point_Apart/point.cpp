#include "point.h"

void Point::setP_x(double x) {//Point::表示是Point的作用域，setP_x()函数表示是该作用域里面的成员函数。
	p_x = x;
}

double Point::getP_x() {
	return p_x;
}

void Point::setP_y(double y) {
	p_y = y;
}

double Point::getP_y() {
	return p_y;
}