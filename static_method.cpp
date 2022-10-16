#include <iostream>
using namespace std;

//静态成员函数
class Person {
public:
	//静态成员函数
	static void func() {

		m_A = 200;//静态成员函数可以访问静态成员变量。
		//m_B = 300;//静态成员函数不可以访问非静态成员变量。无法区分到底是哪个对象的m_B属性。
		cout << "static void func()函数调用！" << endl;
	}

	static int m_A;//静态成员变量，类内声明

	int m_B;//非静态成员变量

	//静态处成员函数也是有访问权限的
private:
	static void func2(){
		cout << "static void func2()函数调用！" << endl;
	}
};

int Person::m_A = 100;//类外初始化

void test01() {
	//访问静态成员函数2种方法：
	//1.通过对象进行访问
	Person p;
	p.func();

	//2.通过类名进行访问
	Person::func();//直接加上Person::的作用域进行类名的访问。

	//Person::func2();//类外访问不到静态的成员函数
}

int main() {

	test01();

	return 0;
}
