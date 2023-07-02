# include <iostream>

using namespace std;

void swap(int &p1,int &p2) {
	int p;
	p = p1;
	p1 = p2;
	p2 = p;
}

int main() {
	
	int a, b;
	cout << "请输入两个数：" << endl;
	cin >> a >> b;
	cout << "Before swap:" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	swap(a, b);
	cout << "After swap:" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	return 0;
}
