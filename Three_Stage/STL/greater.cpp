#include <iostream>
#include <vector>
using namespace std;
#include <functional>//内建函数对象头文件
#include <algorithm>

//内建函数对象---关系仿函数
//greater<>

class MyCompare {
public:
	bool operator()(int v1,int v2) {
		return v1 > v2;
	}
};

void test01() {
	vector<int>v;

	v.push_back(10);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	v.push_back(50);

	//遍历
	for (vector<int>::iterator it = v.begin(); it != v.end();it++) {
		cout << *it << " ";
	}
	cout << endl;

	//降序
	sort(v.begin(),v.end(),MyCompare());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	//使用内建函数对象：greater<int>()
	sort(v.begin(),v.end(),greater<int>());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int main() {
	
	test01();

	return 0;
}
