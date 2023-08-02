# include <iostream>

using namespace std;

class Time {
public:
	Time(int, int, int);
	friend void display(Time&);
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

void display(Time &t) {
	cout << t.hour << ":" << t.minute << ":" << t.second << endl;
}

int main() {
	
	Time t1(10, 13, 56);
	display(t1);

	return 0;
}
