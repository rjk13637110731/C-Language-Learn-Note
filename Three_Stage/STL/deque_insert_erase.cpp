#include <iostream>
#include <deque>
using namespace std;

//deque容器的插入与删除

void printDeque(const deque<int>&d) {
	for (deque<int>::const_iterator it = d.begin(); it != d.end();it++) {//const_iterator是：只读迭代器
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	deque<int>d1;
	
	//尾插
	d1.push_back(10);
	d1.push_back(20);
	//头插
	d1.push_front(100);
	d1.push_front(200);
	printDeque(d1);

	//尾删
	d1.pop_back();
	printDeque(d1);

	//头删
	d1.pop_front();
	printDeque(d1);
}

void test02() {
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);
	printDeque(d1);

	//insert插入
	d1.insert(d1.begin(),1000);
	printDeque(d1);

	d1.insert(d1.begin(),2,10000);
	printDeque(d1);

	//按照区间进行插入
	deque<int>d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);
	d1.insert(d1.begin(),d2.begin(),d2.end());
	printDeque(d1);
}

void test03() {
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);

	//删除
	deque<int>::iterator it = d1.begin();
	it++;
	d1.erase(it);
	printDeque(d1);

	//按照区间进行删除
	d1.erase(d1.begin(),d1.end());
	//清空
	d1.clear();//清空
	printDeque(d1);//清空
}

int main() {

	test01();

	cout << "===============" << endl;

	test02();

	cout << "===============" << endl;

	test03();

	return 0;
}
