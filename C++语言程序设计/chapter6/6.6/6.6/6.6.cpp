//6_6.cpp
# include <iostream>

using namespace std;

int main() {
	
	//void voidObject
	void* pv;
	int i = 5;
	pv = &i;
	int* pint = static_cast<int*>(pv);
	cout << "*pint = " << *pint << endl;

	return 0;
}