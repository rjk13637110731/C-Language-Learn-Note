//4_10.cpp
# include <iostream>

using namespace std;

enum Level {FRESHMAN,SOPHOMORE,JUNIOR,SENIOR};
enum Grade{A,B,C,D};

class Student {
public:
	Student(unsigned number, Level level, Grade grade) :number(number), level(level), grade(grade) {}
	void show();
private:
	unsigned number : 27;
	Level level : 2;
	Grade grade : 2;
};

void Student::show() {
	cout << "Number:    " << number << endl;
	cout << "Level:    ";
	switch (level) {
	case FRESHMAN:
		cout << "freshman" << endl;
		break;
	case SOPHOMORE:
		cout << "sophomore" << endl;
		break;
	case JUNIOR:
		cout << "junior" << endl;
		break;
	case SENIOR:
		cout << "senior" << endl;
		break;
	}
	cout << "Grede:	   ";
	switch (grade) {
	case A:
		cout << "A" << endl;
		break;
	case B:
		cout << "B" << endl;
		break;
	case C:
		cout << "C" << endl;
		break;
	case D:
		cout << "D" << endl;
		break;
	}
}

int main() {
	
	Student s(12345678, SOPHOMORE, B);
	cout << "Size of Student:" << sizeof(Student) << endl;
	s.show();

	return 0;
}