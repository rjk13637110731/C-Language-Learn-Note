# include <iostream>

using namespace std;

long fac(int);

int main() {
	int n;
	long y;
	cout << "Please enter an integer: ";
	cin >> n;

	y = fac(n);
	cout << n << "! = " << y << endl;

	return 0;
}

long fac(int n) {
	int y;
	if (n == 1 || n == 0) {
		y = 1;
	}
	else if (n < 0) {
		cout << "Error!" << endl;
		y = -1;
	}
	else {
		y = n * fac(n - 1);
	}

	return y;

}
