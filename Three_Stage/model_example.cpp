#include <iostream>
using namespace std;
//实现通用的对数组进行排序
//规则是从大到小
//算法：选择
//测试：int、char类型

//交换函数模板
template <class T>
void mySwap(T& a,T& b) {
	T temp = a;
	a = b;
	b = temp;
}

//打印数组的模板
template <class T>
void printArray(T arr[],int len) {
	for (int i = 0; i < len; i++) {
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
}

//排序算法
template <class T>
void mySort(T arr[],int len) {
	for (int i = 0; i < len;i++) {
		int max = i;//认定最大值的下标
		for (int j = i + i; j < len;j++) {
			//我们认定的最大值比遍历的数值要小，说明j下标的元素才是真正的最大值
			if (arr[max] < arr[j]) {
				max = j;//更新最大值下标
			}
		}
		if (max != i) {
			//交换max和i元素
			mySwap(arr[max], arr[i]);
		}
	}
}

void test01() {
	//测试char数组
	char charArr[] = "badcfe";
	int len = sizeof(charArr) / sizeof(charArr[0]);
	mySort(charArr,len);
	printArray(charArr,len);//会打印出 /0 终止符

	int intArr[] = { 2,8,4,6,7,3,0 };
	int len1 = sizeof(intArr) / sizeof(intArr[0]);
	mySort(intArr,len1);
	printArray(intArr,len1);
}

int main() {
	
	test01();

	return 0;
}
