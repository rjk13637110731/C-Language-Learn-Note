# include <iostream>
# include <string>

using namespace std;

int main() {
	
	string str;
	cout << "please input string: " << endl;

	cin >> str;
	cout << "The string is: " << endl;

	cout << str << endl;

	string str1, str2;
	cout << "Please input str1: " << endl;
	cin >> str1;
	str2 = str1;
	cout << "str2 is : " << str2 << endl;

	return 0;
}
