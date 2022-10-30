#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>&v) {
	for (vector<int>::iterator it = v.begin(); it != v.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

//vector容量和大小

void test01() {
	vector<int>v1;
	for (int i = 0; i < 10;i++) {
		v1.push_back(i);
	}
	printVector(v1);

	if (v1.empty()) {//为真 代表容器为空，为假 代表容器不为空
		cout << "v1为空" << endl;
	}else{
		cout << "v1不为空" << endl;
		cout << "v1的容量为：" << v1.capacity() << endl;
		cout << "v1的大小为：" << v1.size() << endl;
	}

	//重新指定大小
	v1.resize(15,100);//利用重载的版本，可以指定默认的填充值，参数2
	printVector(v1);//如果重新指定的比原来长了，默认用0填充新的位置。
	cout << "v1的容量为：" << v1.capacity() << endl;
	cout << "v1的大小为：" << v1.size() << endl;

	v1.resize(5);//如果重新指定的比原来的短了，超出的部分会被删除。
	printVector(v1);
}

int main() {

	test01();

	return 0;
}
