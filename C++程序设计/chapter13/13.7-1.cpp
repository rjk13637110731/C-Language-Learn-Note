# include <iostream>
# include <iomanip>

using namespace std;

int main() {

	char ch[20];
	cout << "enter a sentence: " << endl;
	cin >> ch;
	cout << "The string read with cin is: " << ch << endl;
	cin.getline(ch, 20, '/');
	cout << "The second part is: " << ch << endl;
	cin.getline(ch, 20);
	cout << "The third part is: " << ch << endl;
	cout << ch << endl;

	return 0;
}
