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
}student1 = { 1001,"Zhang Xin",'M',19,{6,8,1993},90.5,"Shang Hai"}, student2;

int main() {
	student2 = { 1002,"Wang Xin",'X',20,{10,10,1998},99.5,"Bei Jing" };

	cout << student1.birthday.year << "年" << student1.birthday.month << "月" << student1.birthday.day << "日" << endl;
	cout << student2.birthday.year << "年" << student2.birthday.month << "月" << student2.birthday.day << "日" << endl;

	return 0;
}
