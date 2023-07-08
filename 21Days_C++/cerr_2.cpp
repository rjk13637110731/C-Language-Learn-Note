# include <iostream>
# include <stdlib.h>

using namespace std;

double func(double x, double y);

int main() {
	try {
		cout << "7.3/3.0 = " << func(7.3, 3.0) << endl;
		cout << "7.3/0.0 = " << func(7.3, 0.0) << endl;
		cout << "7.3/1.0 = " << func(7.3, 1.0) << endl;
		cout << "7.3/2.0 = " << func(7.3, 2.0) << endl;
	}
	catch(double){
		cerr << "error of dividing zeros.\n";
		exit(1);
	}
	cout << "That is ok." << endl;
	return 0;
}

double func(double x,double y) {
	if (y == 0.0) {
		throw y;
	}
	return x / y;
}
