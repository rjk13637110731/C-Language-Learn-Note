#include <iostream>
#include <deque>
using namespace std;

//deque容器构造函数

void printDeque(const deque<int> & d) {//加入const关键字，限制只读deque容器
	for (deque<int>::const_iterator it = d.begin(); it != d.end();it++) {
		//*it = 100;//容器里中的数据不可以修改，只读类型的数据。
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	deque<int> d1;
	for (int i = 0; i < 10;i++) {
		d1.push_back(i);
	}
	printDeque(d1);

	deque<int>d2(d1.begin(), d1.end());
	printDeque(d2);

	deque<int>d3(10,100);
	printDeque(d3);

	deque<int>d4(d3);
	printDeque(d4);
}

int main() {

	test01();

	return 0;
}
