#include <iostream>
using namespace std;

//提前让编译器知道Person类模板的存在
template<class T1,class T2>
class Person;

//类外实现
template<class T1, class T2>
void printPerson(Person<T1, T2> p) {
	cout << "类外实现的内容 --- 姓名：" << p.m_Name << "\t年龄：" << p.m_Age << endl;
}

template<class T1,class T2>
class Person {
	//全局函数类外实现
	//加空模板参数列表
	//如果全局函数是类外实现，需要让编译器提前知道这个函数的存在。
	friend void printPerson<>(Person<T1, T2> p);

public:
	Person(T1 name,T2 age) {
		this->m_Name = name;
		this->m_Age = age;
	}

private:
	T1 m_Name;
	T2 m_Age;
};

//2.全局函数在类外实现测试
void test01() {
	Person<string, int> p("TomTom",20);
	printPerson(p);
}

int main() {
	
	test01();

	return 0;
}
