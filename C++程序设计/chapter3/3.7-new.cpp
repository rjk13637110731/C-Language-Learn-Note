# include <iostream>

using namespace std;

int main() {
	
	char grade;
	cin >> grade;
	switch (grade) {
	case 'A':
		cout << "85~100" << endl;
		break;
	case 'B':
		cout << "70~84" << endl;
		break;
	case 'C':
		cout << "60~69" << endl;
		break;
	case 'D':
		cout << "<60" << endl;
		break;
	default:
		cout << "Error!" << endl;
		break;
	}

	return 0;
}
