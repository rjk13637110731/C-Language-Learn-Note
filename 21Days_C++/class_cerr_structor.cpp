# include <iostream>

using namespace std;

class expt {
public:
	expt() {
		cout << "structor of expt" << endl;
	}
	~expt() {
		cout << "destructor of expt" << endl;
	}
};

class demo {
public:
	demo() {
		cout << "structor of demo" << endl;
	}
	~demo() {
		cout << "destructor of demo" << endl;
	}
};

void func1() {
	int s = 0;
	demo d;
	throw s;
}

void func2() {
	expt e;
	func1();
}


void main() {
	try {
		func2();
	}
	catch (int) {
		cout << "catch int exception" << endl;
	}

	cout << "continue main()" << endl;
}
