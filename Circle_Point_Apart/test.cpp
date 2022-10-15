#include <iostream>
using namespace std;
#include "point.h"
#include "circle.h"

int c_p_Distance(Circle& c,Point& p) {
	double distance = (c.getCenter().getP_x() - p.getP_x()) * (c.getCenter().getP_x() - p.getP_x()) + (c.getCenter().getP_y() - p.getP_y()) * (c.getCenter().getP_y() - p.getP_y());
	if (distance > c.getC_r() * c.getC_r()) {
		return 1;
	}
	else if (distance == c.getC_r() * c.getC_r()) {
		return 0;
	}
	else if (distance < c.getC_r() * c.getC_r()) {
		return -1;
	}
}

int main() {

	Point p;
	p.setP_x(0.0);
	p.setP_y(4.0);

	Point center;
	center.setP_x(0.0);
	center.setP_y(0.0);

	Circle c;
	c.setCenter(center);
	c.setC_r(4.0);

	int ret = c_p_Distance(c,p);
	if (ret ==1) {
		cout << "圆和点之间的关系：点在圆外！" << endl;
	}else if (ret == 0){
		cout << "圆和点之间的关系：点在圆上！" << endl;
	}else if (ret == -1){
		cout << "圆和点之间的关系：点在圆内！" << endl;
	}

	return 0;
}