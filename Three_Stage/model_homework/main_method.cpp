#include <iostream>
using namespace std;
#include <string>
#include "MyArray.hpp"

void printArray(MyArray<int> &arr) {
	for (int i = 0; i < arr.getSize();i++) {
		cout << arr[i] << endl;
	}
}

void test01() {
	MyArray<int> arr1(5);
	for (int i = 0; i < 5;i++) {
		//利用尾插法向数组中插入数据
		arr1.Push_Back(i);
	}
	cout << "arr1的打印输出为：" << endl;
	printArray(arr1);

	cout << "arr1的容量为：" << arr1.getCapacity() << endl;

	cout << "arr1的大小为：" << arr1.getSize() << endl;

	MyArray<int> arr2(arr1);

	cout << "arr2的打印输出为：" << endl;
	printArray(arr2);

	//尾删
	arr2.Pop_Back();
	cout << "arr2尾删后：" << endl;
	cout << "arr2的容量为：" << arr2.getCapacity() << endl;
	cout << "arr2的大小为：" << arr2.getSize() << endl;

	/*
	MyArray<int> arr2(arr1);
	MyArray<int> arr3(100);
	arr3 = arr1;
	*/
}

//测试自定义类型数据
class Person {
public:
	Person() {};
	Person(string name,int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};

void printPerson(MyArray<Person>& arr) {
	for (int i = 0; i < arr.getSize();i++) {
		cout << "姓名：" << arr[i].m_Name << "\t年龄：" << arr[i].m_Age << endl;
	}
}

void test02() {
	MyArray<Person> arr(10);
	Person p1("孙悟空",99);
	Person p2("韩信",20);
	Person p3("李白",40);
	Person p4("猪八戒",88);
	Person p5("唐僧",77);

	//将数据插入到数组中
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);

	//打印数组
	printPerson(arr);

	//输出容量
	cout << "数组arr的容量为：" << arr.getCapacity() << endl;

	//输出大小
	cout << "数组arr的大小为：" << arr.getSize() << endl;
}

int main() {
	
	test01();
	test02();

	return 0;
}
