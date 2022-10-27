#include <iostream>
using namespace std;

//函数模板注意事项
//1.自动类型推导，必须推导出已知的数据类型T才能使用
template <typename T>//typename 可以换成 class
void mySwap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

void test01() {
	int a = 10;
	int b = 20;
	char c = 'c';
	mySwap(a, b);//正确的
	//mySwap(a, c);//错误的!推导不出一致的数据类型T。
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

}

//2.模板必须要确定T的数据类型，才可以使用
template <class T>
void func() {
	cout << "func调用" << endl;
}

void test02() {
	func<int>();//正确
	//func();//错误，不指名类型。
}

int main() {
	
	test01();
	cout << "============" << endl;
	test02();
	return 0;
}
