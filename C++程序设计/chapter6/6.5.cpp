# include <iostream>

using namespace std;

int main() {

	int a[10];
	int i = 0;

	for (i = 0; i < 10;i++) {
		cin >> a[i];
	}
	cout << endl;

	// 下标法：
	for (i = 0; i < 10;i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	//指针法：
	for (i = 0; i < 10;i++) {
		cout << *(a + i) << " ";
	}
	cout << endl;

	//用指针变量指向数组元素
	int b[10], j, * p = b;
	for (j = 0; j < 10;j++) {
		cin >> *(p + j);
	}
	cout << endl;

	for (p = b; p < (b+10);p++) {
		cout << *p << " ";

	}
	cout << endl;

	return 0;
}
