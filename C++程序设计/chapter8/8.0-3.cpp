# include <iostream>
# include <string>

using namespace std;

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


	return 0;
}
