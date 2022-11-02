#include <iostream>
#include <queue>
#include <string>
using namespace std;

//queue容器常用接口

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
	//创建队列
	queue<Person>q;

	//准备数据
	Person p1("唐僧",30);
	Person p2("孙悟空", 1000);
	Person p3("猪八戒", 900);
	Person p4("沙增", 800);

	//入队
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	//判断只要队列不为空，查看队头，查看队尾，出队
	while (!q.empty()) {
		//查看队头
		cout << "队头--姓名为：" << q.front().m_Name << "\t年龄为：" << q.front().m_Age << endl;
		//查看队尾
		cout << "队尾--姓名为：" << q.back().m_Name << "\t年龄为：" << q.back().m_Age << endl;
		//出队
		q.pop();
	}
	
	//查看队列大小
	cout << "q队列的大小为：" << q.size() << endl;
}

int main() {

	test01();
	
	return 0;
}
