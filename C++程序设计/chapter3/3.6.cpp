# include <iostream>
# include <cmath>
# include <iomanip>

using namespace std;

int main() {

	double a, b, c;
	cout << "please enter a,b,c:";
	cin >> a >> b >> c;

	if ((a+b > c) && (b+c > a) &&(c+a > b)) {
		double s, area;
		s = (a + b + c) / 2;
		area = sqrt(s * (s - a) * (s - b) * (s - c));
		cout << resetiosflags(ios::fixed) << setiosflags(4);
		cout << "area = " << area << endl;
	}
	else{
		cout << "It is not a trilateral!" << endl;
	}

	return 0;
}
