# include <iostream>
# include <string>

using namespace std;

class Time {
public:
	void set_time(int hour = 0, int minute = 0, int sec = 0);
	void show_time();
private:
	int hour;
	int minute;
	int second;
};

void Time::set_time(int hour, int minute, int sec) {
	this->hour = hour;
	this->minute = minute;
	this->second = sec;
}

void Time::show_time() {
	cout << this->hour << ":" << this->minute << ":" << this->second << endl;
}

int main() {

	Time t1;
	Time t2;

	t1.set_time(12, 25, 39);
	t2.set_time();
	t1.show_time();
	t2.show_time();

	return 0;
}
