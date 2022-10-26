#include <iostream>
using namespace std;

//两个整型交换函数
void swapInt(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

//两个浮点型数交换函数
void swapDouble(double& a, double& b) {
	double temp = a;
	a = b;
	b = temp;
}

//测试
void test01() {
	int a = 10;
	int b = 20;
	swapInt(a, b);
	cout << "a = " << a << " b = " << b << endl;

	double c = 1.1;
	double d = 2.2;
	swapDouble(c,d);
	cout << "c = " << c << " d = " << d << endl;
}

//函数模板
template <typename T>//声明一个模板，告诉编译器后面代码中紧跟着的T不要报错，T是通用的数据类型
void mySwap(T& a,T&b) {
	T temp = a;
	a = b;
	b = temp;
}

//测试
void test02() {
	int a = 10;
	int b = 20;

	//利用函数模板进行交换
	//两种方式使用函数模板：
	//1.自动类型推导
	mySwap(a,b);
	cout << "a = " << a << " b = " << b << endl;
	//2.显示指定类型
	double c = 1.1;
	double d = 2.2;
	mySwap<double>(c,d);
	cout << "c = " << c << " d = " << d << endl;
}

int main() {
	
	test01();
	cout << "===================" << endl;
	test02();

	return 0;
}
