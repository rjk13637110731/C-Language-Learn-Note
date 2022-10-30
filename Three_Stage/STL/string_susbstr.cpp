#include <iostream>
#include <string>
using namespace std;

//string字符串求子串
void test01() {
	string str = "abcdef";
	string subStr = str.substr(1,3);//bcd
	cout << "subStr = " << subStr << endl;
}

//实用操作
void test02() {
	string email = "hello@sina.com";

	//从邮件地址中获取用户名
	int pos = email.find("@");
	string userName = email.substr(0,pos);
	cout << "userName: " << userName << endl;
}

int main() {

	test01();
	test02();

	return 0;
}
