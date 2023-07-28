# include <iostream>
# include <string>
using namespace std;

struct Student {
	string name;
	int num;
	char sex;;
};

int main() {
	
	Student* p;
	p = new Student;
	p->name = "Wang Fun";
	p->num = 10123;
	p->sex = 'm';

	cout << p->name << " " << p->num << " " << p->sex << endl;

	return 0;
}
