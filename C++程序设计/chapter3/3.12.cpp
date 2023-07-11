# include <iostream>
# include <iomanip>
# include <cmath>

using namespace std;

int main() {
	
	int s = 1;
	double n = 1, pi = 1;

	while (n <= 300000) {
		n += 2;
		s = -s;
		pi += s / n;
	}
	pi = pi * 4;
	cout << "pi = " << setiosflags(ios::fixed) << setprecision(6) << pi << endl;

	return 0;
}
