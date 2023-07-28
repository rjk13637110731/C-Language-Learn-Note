# include <iostream>
# include <string>
# include <iomanip>

using namespace std;

struct Person{
	int num;
	string name;
	char sex;
	char job;
	union P{
		int grade;
		string position;
	}category;
}person[2];

int main() {
	for (int i = 0; i < 2;i++) {
		cin >> person[i].num >> person[i].name >> person[i].sex >> person[i].job;
		if (person[i].job == 's') {
			cin >> person[i].category.grade;
		}
		else {
			cin >> person[i].category.position;
		}
	}

	cout << endl;
	cout << "No. Name sex job grade/position" << endl;

	for (int i = 0; i < 2;i++) {
		if (person[i].job == 's') {
			cout << person[i].num << setw(6) << person[i].name << "      " << person[i].sex << "      " 
				<< person[i].job << "      " << setw(10) << person[i].category.grade << endl;
		}
		else {
			cout << person[i].num << setw(6) << person[i].name << "      " << person[i].sex << "      "
				<< person[i].job << "      " << setw(10) << person[i].category.position << endl;
		}
	}

	return 0;
}
