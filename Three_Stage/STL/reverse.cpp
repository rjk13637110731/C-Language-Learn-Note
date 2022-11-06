#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;

//常用的排序算法 ---> reverse

void myPrint(int val) {
	cout << val << " ";
}

void test01() {
	vector<int>v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);


	//逆转前
	cout << "逆转前：" << endl;
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

	//逆转后

	reverse(v.begin(),v.end());

	cout << "逆转后：" << endl;
	for_each(v.begin(),v.end(),myPrint);
	cout << endl;
}


int main() {
	
	test01();

	return 0;
}
