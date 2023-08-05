# include <iostream>
# include <string>

using namespace std;

class Student {
public:
	void get_value() {
		cin >> num >> name >> sex;
	}
	void display() {
		cout << "num: " << num << endl;
		cout << "name: " << name << endl;
		cout << "sex: " << sex << endl;
	}
private:
	int num;
	string name;
	char sex;
};

class Student1:public Student {
public:
	void display_1() {
		cout << "age: " << age << endl;
		cout << "address: " << addr << endl;
	}
private:
	int age;
	char addr[20];
};

int main(){

	Student1 stud;
	stud.display();
	stud.display_1();

	return 0;
}
