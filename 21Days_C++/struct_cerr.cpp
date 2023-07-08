# include <iostream>

using namespace std;

struct aircraft {
	char* aircrafttype;
	float len;
};

void myfunc() {
	aircraft a;
	char str[] = "queen";
	a.aircrafttype = str;
	a.len = 125;
	throw a;
}

void main() {
	try {
		myfunc();
	}
	catch (aircraft b) {
		cout << "aircraft type is : " << b.aircrafttype << "\n";
	}
}
