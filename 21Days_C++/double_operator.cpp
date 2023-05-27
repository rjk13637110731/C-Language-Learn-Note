#include <iostream>
using namespace std;

class point {
private:
	int x;
	int y;
public:
	point(int xx = 0,int yy = 0) {
		x = xx;
		y = yy;
	}
	int getx() {
		return x;
	}
	int gety() {
		return y;
	}
	point operator+(point p);
};

point point::operator+(point p) {
	point temp;
	temp.x = x + p.x;
	temp.y = y + p.y;
	return temp;
}

int main() {
	
	point ob1(1, 2);
	point ob2(3, 4);
	point ob3;
	point ob4;

	ob3 = ob1 + ob2;
	ob4 = ob1.operator+(ob2);
	cout << "ob3.x = " << ob3.getx() << endl;
	cout << "ob3.y = " << ob3.gety() << endl;
	cout <<"----------------------------" << endl;
	cout << "ob4.x = " << ob4.getx() << endl;
	cout << "ob4.y = " << ob4.gety() << endl;

	return 0;
}