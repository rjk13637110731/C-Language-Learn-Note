#include <iostream>
#include <string>
using namespace std;

//string字符串查找与替换
//1.查找
void test01() {
	string str1 = "abcdefg";
	int pos = str1.find("de");
	if (pos == -1) {
		cout << "未找到字符串" << endl;
	}else{
		cout << "pos = " << pos << endl;
	}

	//rfind和find的区别：
	//rfind从右向左查找，find从左向右查找
	pos = str1.rfind("de");
	cout << "pos = " << pos << endl;
}

//2.替换
void test02() {
	string str1 = "abcdefg";
	//从1号下标的位置起，3个字符被替换成"1111"。
	str1.replace(1,3,"1111");
	cout << "str1 = " << str1 << endl;
}

int main() {

	test01();
	test02();

	return 0;
}
