# include <iostream>

using namespace std;

int main() {
	
	int a;
	int& ra = a;
	a = 1;

	cout << "给变量a赋值1后：" << endl;
	cout << "a = " << a << endl;
	cout << "ra = " << ra << endl;

	ra = 2;
	cout << "给引用ra赋值2后：" << endl;
	cout << "ra = " << ra << endl;
	cout << "a = " << a << endl;

	return 0;
}
