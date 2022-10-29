#include <iostream>
#include <string>
using namespace std;

//string字符串拼接操作

void test01() {
	string str1 = "我";
	str1 += "爱玩游戏";
	cout << "str1 = " << str1 << endl;

	str1 += ':';
	cout << "str1 = " << str1 << endl;

	string str2 = "LOL DNF";
	str1 += str2;
	cout << "str1 = " << str1 << endl;

	string str3 = "I";
	str3.append(" love ");
	cout << "str3 = " << str3 << endl;

	str3.append("game abcdef",4);
	cout << "str3 = " << str3 << endl;

	str3.append(str2);
	cout << "str3 = " << str3 << endl;
	
	string str4 = "I love game: ";
	str4.append(str2,0,3);//直截取到LOL
	cout << "str4 = " << str4 << endl;
}


int main() {

	test01();

	return 0;
}
