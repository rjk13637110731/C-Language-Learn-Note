//6_13.cpp
# include <iostream>

using namespace std;

class Point {
public:
	Point(int x = 0, int y = 0) {
		this->x = x;
		this->y = y;
	}

	int getX() const{
		return x;
	}

	int getY() const{
		return y;
	}
private:
	int x;
	int y;
};

int main() {
	
	Point a(4, 5);
	Point* p1 = &a;
	int (Point:: * funcPtr)() const = &Point::getX;

	cout << (a.*funcPtr)() << endl;
	cout << (p1->*funcPtr)() << endl;

	cout << a.getX() << endl;
	cout << p1->getX() << endl;

	return 0;
}