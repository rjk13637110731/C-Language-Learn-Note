//6_7.cpp
# include <iostream>

using namespace std;

int main() {

	////6.7.1.cpp
	//int a[10] = { 1,2,3,4,5,6,7,8,9,0 };
	//for (int i = 0; i < 10;i++) {
	//	cout << a[i] << "  ";
	//}
	//cout << endl;

	////6.7.2.cpp
	//int a[10] = { 1,2,3,4,5,6,7,8,9,0 };
	//for (int i = 0; i < 10;i++) {
	//	cout << *(a + i) << "  ";
	//}
	//cout << endl;

	//6.7.3.cpp
	int a[10] = { 1,2,3,4,5,6,7,8,9,0 };
	for (int *p = a; p<(a+10) ;p++) {
		cout << *p << "  ";
	}
	cout << endl;

	return 0;
}