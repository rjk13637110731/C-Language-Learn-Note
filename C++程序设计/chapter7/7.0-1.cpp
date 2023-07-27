# include <iostream>

using namespace std;

struct Student {
	int num;
	char name[20];
	char sex;
	int age;
	float score;
	char addr[30];
}student1,student2;

int main() {
	student1.num = 1001;
	student2.age = 30;

	return 0;
}
