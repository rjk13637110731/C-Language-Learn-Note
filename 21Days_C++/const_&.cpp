# include <iostream>

using namespace std;

void main() {
	int var = 6;
	cout << "整形变量var = " << var << endl;
	const int& r1 = 9;
	cout << "const引用r1 = " << r1 << endl;
	const int& r2 = r1;
	cout << "const引用r2 = " << r2 << endl;
	const int& r3 = var + r1;
	cout << "const引用r3 = " << r3 << endl;
}
