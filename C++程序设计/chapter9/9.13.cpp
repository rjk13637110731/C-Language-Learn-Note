# include <iostream>

using namespace std;

class Date;
class Time {
public:
	Time(int, int, int);
	void display(Date&);
private:
	int hour;
	int minute;
	int second;
};

Time::Time(int h,int m,int s) {
	hour = h;
	minute = m;
	second = s;
}

class Date {
public:
	Date(int, int, int);
	friend void Time::display(Date&);
private:
	int month;
	int day;
	int year;
};

void Time::display(Date &d) {
	cout << d.month << "/" << d.day << "/" << d.year << endl;
	cout << hour << ":" << minute << ":" << second << endl;
}

Date::Date(int m,int d,int y) {
	month = m;
	day = d;
	year = y;
}

int main() {
	
	Time t1(10, 13, 56);
	Date d1(12, 25, 2004);
	t1.display(d1);

	return 0;
}
