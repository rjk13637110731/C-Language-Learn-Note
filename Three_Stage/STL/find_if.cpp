#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>
#include <string>

//常用查找算法---> find_if
//查找内置数据类型

//仿函数
class GreaterFive {
public:
	bool operator()(int val) {
		return val > 5;
	}
};

void test01() {
	vector<int>v;
	for (int i = 0; i < 10;i++) {
		v.push_back(i);
	}

	vector<int>::iterator it = find_if(v.begin(),v.end(),GreaterFive());
	if (it == v.end()) {
		cout << "没有找到！" << endl;
	}else{
		cout << "找到大于5的数字为：" << *it << endl;
	}
}

//查找自定义数据类型
class Person {
public:
	Person(string name,int age) {
		this->m_Age = age;
		this->m_Name = name;
	}
	string m_Name;
	int m_Age;
};

//伪函数
class MyCompare {
public:
	bool operator()(Person &p) {
		return p.m_Age > 20;
	}
};

void test02() {
	vector<Person>v;

	//准备数据
	Person p1("aaa",10);
	Person p2("bbb",20);
	Person p3("ccc",30);
	Person p4("ddd",40);

	//插入数据
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	//找年龄大于20的人
	vector<Person>::iterator it = find_if(v.begin(),v.end(),MyCompare());
	if (it == v.end()) {
		cout << "没有找到！" << endl;
	}else {
		cout << "找到了，姓名：" << it->m_Name << "\t年龄：" << it->m_Age << endl;
	}
}

	

int main() {
	
	test01();
	test02();

	return 0;
}
