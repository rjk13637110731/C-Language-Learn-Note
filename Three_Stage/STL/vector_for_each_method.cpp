#include <iostream>
#include <vector>//包含头文件：Alt+Enter快捷键
#include <algorithm>//标准算法头文件
using namespace std;

//vector容器存放内置数据类型

void myPrint(int val) {
	cout << val << endl;
}

void test01() {
	//创建了一个vector容器，数组。
	vector<int> v;

	//向容器中插入数据
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	//通过迭代器访问容器中的数据
	vector<int>::iterator itBegin = v.begin();//起始迭代器指向容器中第一个元素。
	vector<int>::iterator itEnd = v.end();//结束迭代器指向容器中最后一个元素的下一个位置。
	//vector<int>::iterator 拿到vector<int>这种容器的迭代器类型

	//第一种遍历方式：
	while (itBegin != itEnd) {
		cout << *itBegin << endl;//可以将迭代器当做指针使用
		itBegin++;
	}

	cout << "=====================" << endl;

	//第二种遍历方式：
	for (vector<int>::iterator it = v.begin(); it != v.end();it++) {
		cout << *it << endl;
	}

	cout << "=====================" << endl;

	//第三种遍历方式：利用STL提供的遍历算法,头文件 algorithm
	for_each(v.begin(),v.end(), myPrint);//低层使用的是回调函数，myPrint(*_UFirst);
}

int main() {

	test01();
	
	return 0;
}
