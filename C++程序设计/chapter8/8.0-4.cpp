# include <iostream>
# include <string>

using namespace std;

class Time {
public:
	int hour;
	int minute;
	int second;
	void set() {
		cin >> hour >> minute >> second;
	}
};

class Student {
public:
	void display();
private:
	int num;
	string name;
	char sex;
}std3,std4;

void Student::display() {
	cout << "num: " << num << endl;
	cout << "name: " << name << endl;
	cout << "sex: " << sex << endl;
}

int main() {
	
	Student s1, s2;

	cout << sizeof(Time) << endl;

	Time t1;
	t1.hour = 24;
	Time& t2 = t1;
	cout << t2.hour << endl;

	return 0;
}
