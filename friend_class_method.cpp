#include <iostream>
using namespace std;
#include <string>

//成员函数做友元
class Building;
class GoodGay {
public:
	GoodGay();

	void visit();//让visit()函数可以访问Building中私有成员
	void visit2();//让visit2()函数不可以访问Building中私有成员

	Building* building;
};

class Building {
	//告诉编译器：GoodGay类下的visit()成员函数作为本类的好朋友，可以访问本类中的私有成员。
	friend void GoodGay::visit();//要添加作用域：GoodGay()::，否则就是全局函数

public:
	Building();

public:
	string m_SittingRoom;//客厅

private:
	string m_BedRoom;//卧室
};

//类外实现成员变量
Building::Building() {
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

GoodGay::GoodGay() {
	building = new Building;
}

void GoodGay::visit() {
	cout << "visit()函数正在访问：" << building->m_SittingRoom << endl;
	cout << "visit()函数正在访问：" << building->m_BedRoom << endl;
}

void GoodGay::visit2() {
	cout << "visit2()函数正在访问：" << building->m_SittingRoom << endl;

	//cout << "visit2()函数正在访问：" << building->m_BedRoom << endl;//报错，不是Building类的友元
}

void test01() {
	GoodGay gg;
	gg.visit();
	gg.visit2();
}

int main() {

	test01();
	
	return 0;
}
