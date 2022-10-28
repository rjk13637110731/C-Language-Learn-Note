#include <iostream>
using namespace std;

//普通函数
int myAdd01(int a,int b) {
	return a + b;
}

//函数模板
template <class T>
T myAdd02(T a,T b) {
	return a + b;
}

void test01() {
	int a = 10;
	int b = 20;
	char c = 'c';//a-97,c-99
	cout << myAdd01(a, c) << endl;//109
}

void test02() {
	int a = 10;
	int b = 20;
	char c = 'c';//a-97,c-99
	cout << myAdd02<int>(a,c) << endl;//109
}

int main() {
	
	test01();
	cout << endl;
	test02();

	return 0;
}
