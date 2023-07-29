# include <iostream>
# include <string>

using namespace std;

class Time {
public:
	int hour;
	int minute;
	int second;
};

int main() {

	void set_time(Time&);
	void show_time(Time&);

	Time t1;
	Time t2;

	set_time(t1);
	show_time(t1);
	set_time(t2);
	show_time(t2);

	return 0;
}

void set_time(Time &t) {
	cin >> t.hour;
	cin >> t.minute;
	cin >> t.second;
}

void show_time(Time &t) {
	cout << t.hour << ":" << t.minute << ":" << t.second << endl;
}
