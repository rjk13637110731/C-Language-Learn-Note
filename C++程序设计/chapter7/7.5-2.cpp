// 指针传递
# include <iostream>
# include <string>
using namespace std;

struct Student {
	int num;
	string name;
	float score[3];
};

int main() {
	
	void print(Student*);

	Student stu;
	Student* pt;
	stu.num = 12345;
	stu.name = "Li Fung";
	stu.score[0] = 67.5;
	stu.score[1] = 89;
	stu.score[2] = 78.5;
	pt = &stu;
	print(pt);

	return 0;
}


void print(Student *pt) {
	cout << pt->num << " " << pt->name << " " << pt->score[0] << " " << pt->score[1] << " " << pt->score[2] << endl;
}
