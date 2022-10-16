#include <iostream>
using namespace std;

//1.常函数
class Person {
public:

	void showPerson() const {//在成员函数后面加const，修饰的是this指针，让指针指向的值也不可以修改 。
		
		//this指针的本质是指针常量。指针的指向是不可以修改的。
		//在一般成员函数中：this等价于：Person * const this;
		//在常函数中：this等价于：const Person * const this;其中第一个const与常函数后的const对应相等。

		//m_A = 200;//这样在常函数中就不可以修改属性了
		//this->m_A = 200;//与上行代码等价，可以省略this->

		//this = NULL;//this指针是不可以修改指针的指向的

		this->m_B = 100;
	}

	void func() {}

	void showPerson1() {
		m_A = 100;//这样可以在成员函数中修改属性
	}

	int m_A;
	mutable int m_B;//特殊变量，即使在常函数中，也可以修改这个值。在成员变量声明前加关键字mutable。
};

void test01() {
	
	Person p;
	p.showPerson();

}

//2.常对象
void test02() {
	const Person p;//在对象前加const，变为常对象。
	//p.m_A = 100;//常对象也不能修改成员变量值的
	p.m_B = 100;//m_B是特殊值，在常对象中也可以被修改。

	//常对象只能调用常函数
	p.showPerson();
	//p.func();//常对象只能调用常函数，不能调用其他普通成员函数，因为普通成员函数可以修改属性。
}

int main() {

	test01();
	
	return 0;
}
