#include <iostream>
#include <string>
#include <set>
using namespace std;

//set容器排序，自定义数据类型

class Person {
public:
	Person(string name,int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};

class comparePerson {
public:
	bool operator()(const Person&p1,const Person&p2) const {//仿函数传入引用参数，就必须在末尾加const，否则会报错
		//按照年龄降序
		return p1.m_Age > p2.m_Age;
	}
};

void test01() {
	//自定义数据类型，都需要指定排序规则

	set<Person,comparePerson>s;

	//创建Person对象
	Person p1("刘备", 24);
	Person p2("关羽", 28);
	Person p3("张飞", 25);
	Person p4("赵云", 21);

	//插入数据
	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);

	//遍历
	for (set<Person,comparePerson>::iterator it = s.begin(); it != s.end();it++) {
		cout << "姓名：" << it->m_Name << "\t年龄：" << it->m_Age << endl;
	}
}


int main() {
	
	test01();

	return 0;
}
