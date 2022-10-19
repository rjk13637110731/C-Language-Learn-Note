#include <iostream>
using namespace std;

//继承中的同名静态成员变量处理方式
class Base {
public:
	static int m_A;//类内声明

	static void func() {
		cout << "Base-static void func()" << endl;
	}

	static void func(int a) {
		cout << "Base-static void func(int a)" << endl;
	}
};

int Base::m_A = 100;//类外初始化

class Son :public Base {
public:
	static int m_A;//类内声明

	static void func() {
		cout << "Son-static void func()" << endl;
	}
};

int Son::m_A = 200;//类外初始化

//1.同名的静态成员属性
void test01() {
	//1.通过对象访问静态数据
	cout << "通过对象访问：" << endl;
	Son s;
	cout << "Son下的m_A = " << s.m_A << endl;//200
	cout << "Base下的m_A = " << s.Base::m_A << endl;//100

	//2.通过类名访问静态数据
	cout << "通过类名访问：" << endl;
	cout << "Son下的m_A = " << Son::m_A << endl;//200

	//第一个::代表通过类名方式访问，第二个::代表访问父类作用域下的静态成员变量。
	cout << "Base下的m_A = " << Son::Base::m_A << endl;//100
	//上行代码等同于：cout << "Base下的m_A = " << Base::m_A << endl;
}

//2.同名的静态成员函数
void test02() {
	//1.通过对象访问：
	Son s;
	s.func();//调用子类中的静态成员函数
	s.Base::func();//调用父类中的静态成员函数

	//2.通过类名访问：
	Son::func();
	Son::Base::func();//等价于：Base::func();

	//Son::func(100);//无法访问，被隐藏掉了
    //子类中出现和父类同名的静态成员函数，也会隐藏掉父类中所有同名成员函数；
    //如果想访问父类中被隐藏的同名成员函数，需要加作用域。
	Son::Base::func(100);//加上父类作用域就可以调用了。
}

int main() {

	test01();

	cout << endl;

	test02();

	return 0;
}
