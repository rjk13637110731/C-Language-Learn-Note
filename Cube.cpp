#include <iostream>
using namespace std;
#include <string>

//立方体类
class Cube {
private:
	double m_H;
	double m_W;
	double m_L;
public:
	void setHeight(double height) {
		m_H = height;
	}
	double getHeight() {
		return m_H;
	}
	void setWeidt(double weidt) {
		m_W = weidt;
	}
	double getWeidt() {
		return m_W;
	}
	void setLength(double length) {
		m_L = length;
	}
	double getLength() {
		return m_L;
	}

	double cal_Are() {
		return 2 * m_H * m_L + 2 * m_H * m_W + 2 * m_W * m_L;
	}

	double cal_Volume() {
		return m_L * m_W * m_H;
	}

	//成员函数判断
	bool equal_Cube(Cube& c2) {
		if (m_L == c2.getLength() && m_W == c2.getWeidt() && m_H == c2.getHeight()) {
			return 1;
		}
		else {
			return 0;
		}
	}
};

//全局函数判断
bool equal_Cube2(Cube& c1, Cube& c2) {
	if (c1.getHeight() == c2.getHeight() && c1.getWeidt() == c2.getWeidt() && c1.getLength() == c2.getLength()) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {

	Cube c1;
	c1.setHeight(2.0);
	c1.setLength(3.0);
	c1.setWeidt(4.0);

	Cube c2;
	c2.setHeight(2.0);
	c2.setLength(4.0);
	c2.setWeidt(4.0);

	cout << "c1的面积：" << c1.cal_Are() << "\t" << "c1的体积：" << c1.cal_Volume() << endl;
	cout << "c2的面积：" << c2.cal_Are() << "\t" << "c2的体积：" << c2.cal_Volume() << endl;
	cout << (c1.equal_Cube(c2) == 1 ? "c1与c2相等" : "c1与c2不相等") << endl;
	cout << (equal_Cube2(c1, c2) == 1 ? "c1与c2相等" : "c1与c2不相等") << endl;
	return 0;
}