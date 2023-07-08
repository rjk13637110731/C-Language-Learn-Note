# include <iostream>
# include <math.h>

using namespace std;

double sqrt_delta(double d) {
	if (d < 0) {
		throw 1;
	}
	return sqrt(d);
}

double delta(double a,double b,double c) {
	double d = b * b - 4 * a * c;
	return sqrt_delta(d);
}

void main() {
	
	double a, b, c;
	cout << "Please input a,b,c" << endl;
	cin >> a >> b >> c;

	while (true) {
		try {
			double d = delta(a, b, c);
			cout << "x1 = " << (d - b) / (2 * a);
			cout << endl;
			cout << "x2 = " << -(b + d) / (2 * a);
			cout << endl;
			break;
		}
		catch (int) {
			cout << "delta < 0,please reenter a,b,c!" << endl;
			cin >> a >> b >> c;
		}
	}

}
