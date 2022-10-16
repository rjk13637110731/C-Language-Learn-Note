#include <iostream>
using namespace std;
#include <string>

//类做友元
class Building;//告诉编译器：马上会创建Building类，先认识一下。

class GoodGay {
public:
	GoodGay();//在类外写构造函数

public:
	void visit();//参观函数，访问Building中的属性。在类外写成员函数
	
	Building* building;

};

class Building {
	//GoodGay类是本类的好朋友，可以访问本类中私有成员。
	friend class GoodGay;

public:
	/*
	Building() {
		
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
		
		//可以在类外写成员函数，进行初始化属性。
	}
	*/
	Building();//在类外写构造函数

public:
	string m_SittingRoom;//客厅

private:
	string m_BedRoom;//卧室
};

//在类外写成员函数
Building::Building() {
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

//在类外写成员函数
GoodGay::GoodGay() {
	//创建建筑物
	building = new Building;
}

//在类外写成员函数
void GoodGay::visit() {
	cout << "好基友类正在访问：" << building->m_SittingRoom << endl;

	cout << "好基友类正在访问：" << building->m_BedRoom << endl;
}

void test01() {
	
	GoodGay gg;
	gg.visit();

}


int main() {

	test01();
	
	return 0;
}
