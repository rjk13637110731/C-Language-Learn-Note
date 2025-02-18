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

int main() {
	
	Time time1(34, 0);
	for (int i = 0; i < 61;i++) {
		++time1;
		time1.display();
	}

	return 0;
}
