# include <iostream>
# include <string>

using namespace std;

class Student {
public:
	Student(int n, string nam) {
		num = n;
		name = nam;
	}
	~Student() {};
	void display();
protected:
	int num;
	string name;
};

void Student::display() {
	cout << "num: " << num << endl;
	cout << "name: " << name << endl;
}

class Student1:public Student {
public:
	Student1(int n, string nam, int n1,string nam1, int a, string ad) :Student(n, nam),monitor(n1,nam1) {
		age = a;
		addr = ad;
	}
	void show() {
		cout << "This student is: " << endl;
		display();
		cout << "age: " << age << endl;
		cout << "address: " << addr << endl;
	}
	~Student1() {};
	void show_monitor() {
		cout << endl << "Class monitor is: " << endl;
		monitor.display();
	}
private:
	int age;
	string addr;
	Student monitor;
};

int main(){

	Student1 stud1(1001, "Wang-li", 1002, "Zhang-fun",19, "115 Beijing Road,Shanghai");
	stud1.show();
	stud1.show_monitor();

	return 0;
}
