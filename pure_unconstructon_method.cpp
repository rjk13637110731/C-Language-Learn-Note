#include <iostream>
using namespace std;
#include <string>

//虚析构和纯虚析构
class Animal {
public:

	//Animal父类的构造函数
	Animal() {
		cout << "Animal构造函数调用！" << endl;
	}

	/*
	//Animal析构函数
	//利用虚析构可以解决父类指针释放子类对象时不干净的问题。
	virtual ~Animal() {//将父类中的析构改成虚析构函数，前面加virtual，这样在父类析构之前子类先析构。
		cout << "Animal析构函数调用！" << endl;
	}
	*/

	//有了纯虚析构之后，这个类也属于抽象类，无法实例化对象。
	virtual ~Animal() = 0;//纯虚析构函数。类内声明

	//纯虚函数
	virtual void speak() = 0;
};

Animal::~Animal() {//纯虚析构函数在类内声明，在类外实现，要加作用域。
	cout << "Animal纯虚析构函数调用！" << endl;
}

class Cat :public Animal {
public:

	//构造函数
	Cat(string name) {
		cout << "Cat构造函数调用！" << endl;
		m_Name = new string(name);
	}

	~Cat() {
		if (m_Name != NULL) {
			cout << "Cat析构函数调用！" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}

	void speak() {
		cout << *m_Name << "修猫咪在说话！" << endl;
	}

	string * m_Name;
};

void test01() {
	Animal* animal = new Cat("Tom");
	animal->speak();

	//父类指针在析构时候，不会调用子类中析构函数，导致子类中如果有堆区属性，出现内存泄漏情况。
	delete animal;
}

int main() {
	
	test01();

	return 0;
}
