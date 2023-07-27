# include <iostream>

using namespace std;

// 定义结构数组的三种方法

struct Date {
	int month;
	int day;
	int year;
};

struct Student {
	int num;
	char name[20];
	char sex;
	Date birthday;
	float score;
}student1[3] = { {1001,"Li Ming",'M',6,8,1993,89.5},{1001,"Wang Ming",'F',7,8,1993,85.5},{1001,"Cai Ming",'M',8,8,1993,99.5}};

Student student2[3];

struct {
	int num;
	char name[20];
	char sex;
	Date birthday;
	float score;
}student3[3];

int main() {

	return 0;
}
