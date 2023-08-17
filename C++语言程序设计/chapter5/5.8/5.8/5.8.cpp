//5_8.cpp
# include <iostream>

using namespace std;

class A {
public:
	A(int i);
	void print();
private:
	const int a;
	static const int b;
};

A::A(int i): a(i){}

void A::print(){
	cout << a << ":" << b << endl;
}


const int A::b = 10;

int main() {
	
	A a1(100), a2(0);
	a1.print();
	a2.print();

	return 0;
}