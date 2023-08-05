# include <iostream>
# include <string>

using namespace std;

class Student {
public:
	Student(int n, string nam, char s) {
		num = n;
		name = nam;
		sex = s;
	}
	~Student() {};
	void display();
protected:
	int num;
	string name;
	char sex;
};

void Student::display() {
	cout << "num: " << num << endl;
	cout << "name: " << name << endl;
	cout << "sex: " << sex << endl;
}

class Student1:public Student {
public:
	Student1(int n, string nam, char s, int a, string ad) :Student(n, nam, s) {
		age = a;
		addr = ad;
	}
	void show() {
		cout << "num: " << num << endl;
		cout << "name: " << name << endl;
		cout << "sex: " << sex << endl;
		cout << "age: " << age << endl;
		cout << "address: " << addr << endl;
	}
	~Student1() {};
private:
	int age;
	string addr;
};

int main(){

	Student1 stud1(1001, "Wang-li", 'f', 19, "115 Beijing Road,Shanghai");
	Student1 stud2(1002, "Zhang-fun", 'm', 21, "213 Shanghai Road,Beijing");
	stud1.show();
	stud2.show();

	return 0;
}
