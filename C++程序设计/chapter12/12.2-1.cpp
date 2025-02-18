# include <iostream>
# include <string>
using namespace std;

class Student {
public:
	Student(int, string, float);
	void display();
protected:
	int num;
	string name;
	float score;
};

Student::Student(int n, string nam, float s) {
	num = n;
	name = nam;
	score = s;
}

void Student::display() {
	cout << "num: " << num << "\nname: " << name << "\nscore: " << score << "\n" << endl;
}

class Graduate :public Student {
public:
	Graduate(int, string, float, float);
	void display();
private:
	float pay;
};

Graduate::Graduate(int n, string nam, float a, float p) :Student(n, nam, a) {
	pay = p;
}

void Graduate::display() {
	cout << "num: " << num << "\nname: " << name << "\nscore: " << score << "\npay: " << pay<< "\n" << endl;
}

int main() {
	
	Student stud1(1001, "Li-Lin", 87.5);
	Graduate grad1(2001, "Wang-Fun", 98.5, 563.5);
	Student* pt = &stud1;
	pt->display();
	pt = &grad1;
	pt->display();

	return 0;
}
