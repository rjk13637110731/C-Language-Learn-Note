# include <iostream>
# include <string>

using namespace std;

class Student {
public:
	void get_value() {
		cin >> num >> name >> sex;
	}
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

class Student1:protected Student {
public:
	void display_1();
private:
	int age;
	char addr[20];
};

void Student1::display_1() {
	cout << "num: " << num << endl;
	cout << "name: " << name << endl;
	cout << "sex: " << sex << endl;
	cout << "age: " << age << endl;
	cout << "address: " << addr << endl;
}

class A {
public:
	int i;
protected:
	void f2();
	int j;
private:
	int k;
};

class B :public A {
public:
	void f3();
protected:
	void f4();
private:
	int m;
};

class C :protected B {
public:
	void f5();
private:
	int n;
};

int main(){

	Student1 stud;
	stud.display_1();
	return 0;
}
