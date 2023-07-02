# include <iostream>
using namespace std;

int  main() {
	
	int* pa;
	pa = new int;
	*pa = 100;
	cout << "*pa = " << *pa << endl;
	delete pa;
	cout << "已删除一个内存单元" << endl;

	int* pb;
	pb = new int[5];
	for (int i = 1; i < 5;i++) {
		*(pb + i) = i;
	}
	cout << "*(pb+2) = " << *(pb + 2) << endl;

	delete[10] pb;
	cout << "已删除一个包含10个元素的数组单元" << endl;

	int(*pc)[3];
	int j;
	pc = new int[2][3];
	for (int i = 0; i < 2;i++) {
		for (j = 0; j < 3;j++) {
			*(pc[i] + j) = 1;
		}
	}
	cout << "*(pc[1]+1) = " << *(pc[1] + 1) << endl;

	return 0;
}
