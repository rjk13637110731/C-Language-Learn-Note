#pragma once//��ֹͷ�ļ��ظ�����
#include <iostream>//��׼�����
using namespace std;
#include "point.h"

//Բ��
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