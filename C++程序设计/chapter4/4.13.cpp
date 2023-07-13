# include <iostream>

using namespace std;

int  fac(int);

int main() {

	for (int i = 1; i <= 10; i++) {
		cout << i << "! = " << fac(i) << endl;
	}

	return 0;
}

int fac(int n) {
	
	static int f = 1;
	f = f * n;

	return f;
}
