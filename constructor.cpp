#include <iostream>
using namespace std;

//构造函数分类
class Person {
public:
	//构造函数--按照参数分类：无参构造函数（默认构造函数）和有参构造函数
	Person() {//普通构造
		cout << "Person的无参构造函数的调用！" << endl;
	}
	Person(int a) {//普通构造
		age = a;
		cout << "Person的有参构造函数的调用！" << endl;
	}
	
	//拷贝构造函数
	Person(const Person& p) {//拷贝构造
		//将传入的人身上的所有属性，拷贝到我身上。
		age = p.age;
		cout << "Person的拷贝构造函数的调用！" << endl;
	}

	~Person() {
		cout << "Person的析构函数的调用！" << endl;
	}

	int age;
};

//调用
void test01() {
	//1.括号法(常用)
	Person p1;//默认构造函数的调用。
	Person p2(10);//有参构造函数的调用。
	Person p3(p2);//拷贝构造函数。

	cout << "p2的年龄：" << p2.age << endl;
	cout << "p3的年龄：" << p3.age << endl;
	//注意事项1：调用默认构造函数的时候，不要加()。因为编译器会将Person p1();这行代码视为是一个函数的声明。不会认为在创建对象。
	
	cout << "=================" << endl;
	
	//2.显示法
	Person p11;
	Person p22 = Person(10);//有参构造
	Person p33 = Person(p22);//拷贝构造

	Person(10);//匿名对象，特点：当前行执行结束后，系统会立即回收掉匿名对象。
	//注意事项2：不要利用拷贝构造函数去初始化匿名对象。编译器会认为：Person(p33); 等价于 Person p33;对象声明
	//Person(p33);//报错：重定义p33


	//3.隐式转换法
	Person p4 = 10;//相当于写了：Person p4 = Person(10);有参构造
	Person p5 = p4;//拷贝构造
}	

int main() {

	test01();


	system("pause");
	return 0;
}
