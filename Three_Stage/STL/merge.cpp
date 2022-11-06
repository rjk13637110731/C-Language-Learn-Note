#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;

//常用的排序算法 ---> merge

void test01() {
	vector<int>v1;
	vector<int>v2;

	for (int i = 0; i < 10;i++) {
		v1.push_back(i);
		v2.push_back(i+1);
	}

	//目标容器
	vector<int>vTarget;

	//提前给目标容器分配内存
	vTarget.resize(v1.size() + v2.size());

	merge(v1.begin(),v1.end(),v2.begin(),v2.end(),vTarget.begin());
	for (vector<int>::iterator it = vTarget.begin(); it != vTarget.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}


int main() {
	
	test01();

	return 0;
}
