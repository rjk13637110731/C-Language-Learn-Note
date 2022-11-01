#include <iostream>
#include <deque>
using namespace std;
#include <algorithm>//标准算法头文件

//deque容器数据的排序

void printDeque(const deque<int>&d) {
	for (deque<int>::const_iterator it = d.begin(); it != d.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_back(30);
	d1.push_front(100);
	d1.push_front(200);
	d1.push_front(300);
	printDeque(d1);

	//排序：默认是从小到大，升序
	//对于支持随机访问的迭代器的容器，都可以使用sort算法直接对其进行排序。
	//vector容器也可以利用sort进行排序。
	sort(d1.begin(),d1.end());
	cout << "排序后的结果：" << endl;
	printDeque(d1);
}

int main() {

	test01();

	return 0;
}
