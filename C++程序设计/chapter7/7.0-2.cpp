# include <iostream>

using namespace std;

struct Date {
	int month;
	int day;
	int year;
};

struct Student {
	int num;
	char name[20];
	char sex;
	int age;
	Date birthday;
	float score;
	char addr[30];
}student1,student2;

int main() {
	student1.num = 1001;
	student2.age = 30;
	student1.birthday = { 6,8,1993 };
	student2.birthday = { 10,10,1998 };

	cout << student1.birthday.year << "年" << student1.birthday.month << "月" << student1.birthday.day << "日" << endl;
	return 0;
}
