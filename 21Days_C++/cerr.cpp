# include <iostream>
# include <stdlib.h>

using namespace std;

double func(double x,double y) {
	if (y == 0) {
		cerr << "error of dividing zero.\n";
		exit(1);
	}
	return x / y;
}

int main() {

	double res;
	res = func(2, 3);
	cout << "The result of x/y is : " << res << endl;

	res = func(4, 0);
	cout << "The result of x/y is : " << res << endl;

	return 0;
}
