#include <iostream>
#include <string>
using namespace std;

//string字符串存取
void test01() {
	string str = "hello";
	cout << "str = " << str << endl;

	//1.通过 [] 访问单个字符
	for (int i = 0; i < str.size();i++) {//size()函数返回字符串长度
		cout << str[i] << " ";
	}
	cout << endl;

	//通过 at 方式访问单个字符
	for (int i = 0; i < str.size();i++) {
		cout << str.at(i) << " ";
	}
	cout << endl;

	//修改单个字符
	str[0] = 'x';
	cout << "str = " << str << endl;//xello

	str.at(1) = 'x';
	cout << "str = " << str << endl;//xxllo
}

int main() {

	test01();

	return 0;
}
