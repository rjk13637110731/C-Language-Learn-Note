//4_4.cpp
# include <iostream>
# include <cmath>

using namespace std;

class Point {
public:
	Point(int xx = 0, int yy = 0) {
		x = xx;
		y = yy;
	}

	Point(Point& p);

	int getX() {
		return x;
	}

	int getY() {
		return y;
	}
private:
	int x;
	int y;
};

Point::Point(Point&p) {
	x = p.x;
	y = p.y;
	cout << "Calling the copy constructor of Point" << endl;
}

class Line {
public:
	Line(Point xp1, Point xp2);
	Line(Line& l);
	double getLen() {
		return len;
	}
private:
	Point p1;
	Point p2;
	double len;
};

Line::Line(Point xp1, Point xp2):p1(xp1),p2(xp2) {
	cout << "Calling constructor of Line" << endl;
	double x = static_cast<double>(p1.getX() - p2.getX());
	double y = static_cast<double>(p1.getY() - p2.getY());
	len = sqrt(x * x + y * y);
}
Line::Line(Line& l):p1(l.p1),p2(l.p2) {
	cout << "Calling the copy constructor of Line" << endl;
	len = l.len;
}

int main() {

	Point myp1(1, 1), myp2(4, 5);
	Line line(myp1, myp2);
	Line line2(line);

	cout << "The length of the line is: " << line.getLen() << endl;
	cout << "The length of the line2 is: " << line2.getLen() << endl;

	return 0;
}