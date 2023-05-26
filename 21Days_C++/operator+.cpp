#include <iostream>
using namespace std;

class CAdd {
public:
	int m_Operand;
	CAdd() {
		m_Operand = 0;
	}
	CAdd(int value) {
		m_Operand = value;
	}
};

CAdd operator+(CAdd a,int b) {
	CAdd sum;
	sum.m_Operand = a.m_Operand + b;
	return sum;
}

int main() {
	
	CAdd a(5), b;
	b = a + 8;
	cout << "the sum is: " << b.m_Operand << endl;

	return 0;
}
