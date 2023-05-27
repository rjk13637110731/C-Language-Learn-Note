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
	friend point operator+(point p,point q);
};

point operator+(point p,point q) {
	point temp;
	temp.x = p.x + q.x;
	temp.y = p.y + q.y;
	return temp;
}

int main() {
	
	point ob1(1, 2);
	point ob2(3, 4);
	point ob3;
	point ob4;
	ob3 = ob1 + ob2;
	ob4 = operator+(ob1, ob2);
	cout << "ob3.x = " << ob3.getx() << "    ob3.y = " << ob3.gety() << endl;
	cout << "ob4.x = " << ob4.getx() << "    ob4.y = " << ob4.gety() << endl;

	return 0;
}