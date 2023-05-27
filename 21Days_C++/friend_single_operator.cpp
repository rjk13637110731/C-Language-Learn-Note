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
	friend point operator++(point &p);
};

point operator++(point &p) {
	++p.x;
	++p.y;
	return p;
}

int main() {

	point ob(3, 4);
	cout << "ob.x = " << ob.getx() << "    ob.y = " << ob.gety() << endl;
	++ob;
	cout << "ob.x = " << ob.getx() << "    ob.y = " << ob.gety() << endl;
	operator++(ob);
	cout << "ob.x = " << ob.getx() << "    ob.y = " << ob.gety() << endl;

	return 0;
}