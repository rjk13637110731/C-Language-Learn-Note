#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>
#include <string>

//常用查找算法---> count
//统计内置数据类型
void test01() {
	vector<int>v;

	v.push_back(10);
	v.push_back(40);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	v.push_back(40);

	int num = count(v.begin(),v.end(),40);
	cout << "一共有：" << num << "个 40元素" << endl;
}
	
//统计自定义数据类型
class Person {
public:
	Person(string name,int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;

	//重载==操作符
	bool operator==(const Person&p) {
		if (this->m_Age == p.m_Age) {
			return true;
		}else {
			return false;
		}
	}
};
void test02() {
	vector<Person>v;

	Person p1("刘备",35);
	Person p2("关羽",35);
	Person p3("张飞",35);
	Person p4("赵云",30);
	Person p5("曹操",40);

	//将人员插入到容器中
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	Person p("诸葛亮",35);

	int num = count(v.begin(),v.end(),p);
	cout << "和诸葛亮同时岁数的人员为：" << num << " 个" << endl;
}

int main() {
	
	test01();
	test02();

	return 0;
}
