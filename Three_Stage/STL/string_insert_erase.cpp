#include <iostream>
#include <string>
using namespace std;

//string字符串插入与删除
void test01() {
	string str = "hello";
	//插入
	str.insert(1,"111");
	cout << "str = " << str << endl;

	//删除
	str.erase(1,3);//从1号位置开始3个字符
	cout << "str = " << str << endl;
}

int main() {

	test01();

	return 0;
}
