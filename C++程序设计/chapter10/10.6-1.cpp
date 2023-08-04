# include <iostream>

using namespace std;

class Time {
public:
	Time() {
		minute = 0;
		second = 0;
	}
	Time(int m, int s) {
		minute = m;
		second = s;
	}
	Time operator++();
	Time operator++(int);
	void display() {
		cout << minute << ":" << second << endl;
	}
private:
	int minute;
	int second;
};

Time Time::operator++() {
	if (++second >= 60) {
		second -= 60;
		++minute;
	}
	return *this;
}

Time Time::operator++(int) {
	Time temp(*this);
	second++;
	if (second >= 60) {
		second -= 60;
		++minute;
	}
	return temp;
}

int main() {
	
	Time time1(34, 59), time2;
	cout << "time1: ";
	time1.display();
	++time1;
	cout << "++time1：";
	time1.display();
	time2 = time1++;
	cout << "time1: ";
	time1.display();
	cout << "time2: ";
	time2.display();

	return 0;
}
