# include <iostream>
# include <string>

using namespace std;

void main() {
	string str1 = "hello";
	string str2 = "Hello";
	string str3 = "Hello World";

	int flag;

	flag = (str1 == str2);
	if (flag == 1) {
		cout << "str1 == str2" << endl;
	}
	else {
		flag = (str1 > str2);
		if (flag == 1) {
			cout << "str1 > str2" << endl;
		}
		else {
			cout << "str1 < str2" << endl;
		}
	}

	flag = (str2 == str3);
	if (flag == 1) {
		cout << "str2 == str3" << endl;
	}
	else {
		flag = (str2 > str3);
		if (flag == 1) {
			cout << "str2 > str3" << endl;
		}
		else {
			cout << "str2 < str3" << endl;
		}
	}

	string str4 = ("Welcome to 21 C++");
	int num;
	num = str4.size();
	cout << "The Length of  " << str4 << " is : " << num << endl;
}
