# include <iostream>

using namespace std;

class Time {
public:
	int hour;
	int minute;
	int second;
	void get_time();
};

void Time::get_time() {
	cout << this->hour << ":" << this->minute << ":" << this->second << endl;
}

int main() {
	
	Time t1;
	Time* pt;
	pt = &t1;
	t1.hour = 10;
	t1.minute = 20;
	t1.second = 30;
	Time x = (*pt);
	cout << &x << endl;

	cout << pt->hour << endl;
	(*pt).get_time();
	pt->get_time();

	return 0;
}
