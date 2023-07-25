# include <iostream>

using namespace std;

int main() {
	void swap(int&, int&);
	int a = 10;
	int b = 20;
	cout << "交换之前：" << endl;
	cout << a << "  " << b << endl;
	swap(a, b);
	cout << "交换之后：" << endl;
	cout << a << "  " << b << endl;

	return 0;
}

void swap(int& a, int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}
