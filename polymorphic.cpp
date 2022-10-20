#include <iostream>
using namespace std;

//多态
//动物类
class Animal {
public:
	//虚函数，只需在函数前面加virtual，就能实现地址晚绑定
	virtual void speak() {
		cout << "动物在说话！" << endl;
	}
};

//猫类
class Cat : public Animal {
public:
	//重写函数，函数的返回值类型、函数名、参数列表要完全相同。
	void speak() {//子类重写父类的虚函数，子类的前面可加可不加virtual关键字，不影响。
		cout << "修猫咪在说话！" << endl;
	}
};

//狗类
class Dog :public Animal {
public:
	void speak() {
		cout << "修狗在说话！" << endl;
	}
};

//动态多态满足条件：
//1.有继承关系
//2.子类重写父类的虚函数

//动态多态的使用：
//父类的指针或者引用指向子类的对象。

//执行说话的函数
//地址早绑定，在编译阶段就确定了函数地址。
//如果想指行让猫说话，那么这个函数地址就不能提前绑定，需要在运行阶段进行绑定，地址晚绑定。
void doSpeak(Animal& animal) {//Animal& animal = cat;
	animal.speak();
}

//测试
void test01() {
	Cat cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);
}

int main() {
	
	test01();

	return 0;
}
