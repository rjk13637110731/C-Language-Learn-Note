//3_17.cpp
# include <iostream>
# include <cmath>

using namespace std;

const double PI = 3.14159265358979;

int main() {

	double angle;
	cout << "Please enter an angle:";
	cin >> angle;

	double radian = angle * PI / 180;
	cout << "sin(" << angle << "бу) = " << sin(radian) << endl;
	cout << "cos(" << angle << "бу) = " << cos(radian) << endl;
	cout << "tan(" << angle << "бу) = " << tan(radian) << endl;

	return 0;
}