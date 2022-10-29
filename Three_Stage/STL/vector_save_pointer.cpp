#include <iostream>
#include <vector>
#include <string>
using namespace std;

//vector容器中存放自定义数据类型
class Person {
public:
	Person(string name,int age) {
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

void test01() {
	vector<Person> v;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);

	//向容器中添加数据
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//遍历容器中的数据
	for (vector<Person>::iterator it = v.begin(); it != v.end();it++) {
		cout << "姓名：" << (*it).m_Name << "\t年龄：" << (*it).m_Age << endl;
		cout << "《《《姓名：" <<it->m_Name << "\t年龄：" << it->m_Age << endl;//it为指针，可以通过剪头的方式访问属性
	}
}

//存放自定义类型指针
void test02() {
	vector<Person*> v;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);

	//向容器中添加数据
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	//遍历容器中的数据
	for (vector<Person*>::iterator it = v.begin(); it != v.end();it++) {
		cout << ">>> 姓名：" << (*it)->m_Name << "\t年龄：" << (*it)->m_Age << endl;
	}
}

int main() {

	test01();

	cout << "====================" << endl;
	
	test02();

	return 0;
}