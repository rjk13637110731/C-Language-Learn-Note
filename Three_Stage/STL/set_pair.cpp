#include <iostream>
#include <string>
using namespace std;

//pair对组的创建，不需要包含头文件

void test01() {
	//第一种方式
	pair<string, int>p("Tom",20);
	cout << "姓名：" << p.first << "\t年龄：" << p.second << endl;

	//第二种方式
	pair<string, int>p2 = make_pair("Jack",25);
	cout << "姓名：" << p2.first << "\t年龄：" << p2.second << endl;
}


int main() {
	
	test01();

	return 0;
}
