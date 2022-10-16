#include <iostream>
using namespace std;

//静态成员变量
class Person {
public:
	static int m_A;//类内声明

	//静态成员变量也是有访问权限的
private:
	static int m_B;
};

int Person::m_A = 100;//类外初始化，Person::表示Person类作用域下的。不加就是一个全局变量。
int Person::m_B = 400;

void test01() {
	Person p;
	cout << p.m_A << endl;

	Person p2;
	p2.m_A = 200;
	cout << p.m_A << endl;
}

void test02() {
	//静态成员变量不属于某个对象上，所有对象都共享同一份数据。
	//因此静态成员变量有两种访问方式
	
	//1.通过对象进行访问
	Person p;
	cout << p.m_A << endl;

	//2.通过类名进行访问
	cout << Person::m_A << endl;//Person::表示Person作用域下的

	//cout << Person::m_B << endl;//类外访问不到私有静态成员变量
}

int main() {

	test01();
	cout << "========================" << endl;
	test02();

	return 0;
}
