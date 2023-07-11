# include <iostream>
# include <iomanip>
using namespace std;

int main() {

	unsigned short a;
	short int b = -1;
	a = b;
	cout << "a = " << a << endl;

	double c = 123.456789012345;
	cout << a << endl;
	cout << setprecision(9) << c << endl;
	cout << setprecision(6);
	cout << setiosflags(ios::fixed);
	cout << setiosflags(ios::fixed) << setprecision(8) << c << endl;
	cout << setiosflags(ios::scientific) << c << endl;
	cout << setiosflags(ios::scientific) << setiosflags(4) << c << endl;
	return 0;
}
