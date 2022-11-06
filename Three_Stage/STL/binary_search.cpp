#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>
#include <string>

//常用查找算法---> binary_search

void test01() {
	vector<int>v;
	for (int i = 0; i < 10;i++) {
		v.push_back(i);
	}

	//v.push_back(2);//如果是无序序列，结果是位置

	//查找容器中是否有9
	//注意：容器必须是有序的序列
	bool ret = binary_search(v.begin(),v.end(),9);
	if (ret) {
		cout << "找到了！" << endl;
	}else {
		cout << "没有找到！" << endl;
	}
}
	

int main() {
	
	test01();

	return 0;
}
