//Point.h
#pragma once
class Point {
public:
	Point(int x = 0, int y = 0) :x(x), y(y) {}

	Point(const Point& p);

	~Point() {
		count--;
	}

	int getX() {
		return x;
	}

	int getY() {
		return y;
	}

	static void showCount();
private:
	int x, y;
	static int count;
};