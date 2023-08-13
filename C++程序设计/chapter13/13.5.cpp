# include <iostream>
# include <iomanip>

using namespace std;

int main() {

	float grade;
	cout << "enter grade: ";
	while (cin >> grade) {
		if (grade>=85) {
			cout << grade << " GOOD!" << endl;
		}
		if (grade<60) {
			cout << grade << " FAIL!" << endl;
		}
		cout << "Enter grade: ";
	}

	cout << "The End." << endl;

	return 0;
}
