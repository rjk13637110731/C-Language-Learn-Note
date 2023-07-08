# include <iostream>
# include <stdlib.h>

using namespace std;

double func(double x,double y) {
	if (y == 0) {
		throw y;
	}
	return x / y;
}

int main() {

	double res;
	try {
		res = func(2, 3);
		cout << "The result of x/y is : " << res << endl;

		res = func(4, 0);
	}
	catch(double){
		cerr << "error of dividing zeros.\n";
		exit(1);
	}
	return 0;
}
