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
	Student1(int n, string nam, int a) :Student(n, nam) {
		age = a;
	}
	void show() {
		cout << "This student is: " << endl;
		display();
		cout << "age: " << age << endl;
	}
	~Student1() {};
private:
	int age;
};

class Student2 :public Student1 {
public:
	Student2(int n, string nam, int a, int s) :Student1(n, nam, a) {
		score = s;
	}
	void show_all() {
		show();
		cout << "score: " << score << endl;
	}
private:
	int score;
};

int main(){

	Student2 stud1(1001, "Wang-li", 17,89);
	stud1.show_all();

	return 0;
}
