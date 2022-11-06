#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

//常用的算术生成算法 ---> accumulate


void test01() {
	vector<int>v;

	for (int i = 0; i < 100;i++) {
		v.push_back(i);
	}

	//参数3是一个起始累加值
	int total = accumulate(v.begin(),v.end(),1000);//头文件是#include<numeric>
	cout << "总和为：" << total << endl;
}


int main() {
	
	test01();

	return 0;
}
