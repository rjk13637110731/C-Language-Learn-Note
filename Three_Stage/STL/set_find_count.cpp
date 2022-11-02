#include <iostream>
#include <set>
using namespace std;

//set查找与统计

void test01() {
	set<int>s1;
	s1.insert(10);
	s1.insert(40);
	s1.insert(20);
	s1.insert(30);

	//查找数据
	set<int>::iterator pos = s1.find(30);

	if (pos != s1.end()) {
		cout << "找到元素：" << *pos << endl;
	}else{
		cout << "未找到元素！" << endl;
	}
}

//统计
void test02() {
	set<int>s1;
	s1.insert(10);
	s1.insert(40);
	s1.insert(30);
	s1.insert(20);
	s1.insert(30);
	s1.insert(30);
	s1.insert(30);

	//统计30的个数
	int num = s1.count(30);
    //对于set而言，统计结果要么是1，要么是0
	cout << "num = " << num << endl;
}

int main() {
	
	test01();
	test02();

	return 0;
}
