# include <iostream>
# include <string>

using namespace std;

class Student {
	int num;
	string name;
	char sex;
	void display() {
		cout << "num: " << num << endl;
		cout << "name: " << name << endl;
		cout << "sex: " << sex << endl;
	}
};

int main() {
	
	Student s1, s2;


	return 0;
}
