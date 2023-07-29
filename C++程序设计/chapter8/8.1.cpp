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

	return 0;
}
