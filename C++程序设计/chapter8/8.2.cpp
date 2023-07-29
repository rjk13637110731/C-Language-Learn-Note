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

	Time t1;
	cin >> t1.hour;
	cin >> t1.minute;
	cin >> t1.second;

	cout << t1.hour << ":" << t1.minute << ":" << t1.second << endl;

	Time t2;
	cin >> t2.hour;
	cin >> t2.minute;
	cin >> t2.second;

	cout << t2.hour << ":" << t2.minute << ":" << t2.second << endl;

	return 0;
}
