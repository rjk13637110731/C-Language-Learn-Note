#include <iostream>
using namespace std;

//空指针调用成员函数
class Person {
public:
	void showClassName() {
		cout << "this is Person class" << endl;
	}

	void showPersonAge() {
		//cout << "age = " << m_Age << endl;
		//上行代码等价于：在m_Age前面加了this->，只是系统省略不写。
		//cout << "age = " << this->m_Age << endl;
		//报错：因为传入的是空指针，上述使用空指针p调用，this也是空指针，报错
		
		//更改代码如下：
		if (this == NULL) {
			return;
		}
		cout << "age = " << m_Age << endl;
	}

	int m_Age;
};

void test01() {
	Person* p = NULL;
	p->showClassName();
	//p->showPersonAge();//直接这么调用会报错,需要添加if判断语句
	
}

int main() {

	test01();
	
	return 0;
}
