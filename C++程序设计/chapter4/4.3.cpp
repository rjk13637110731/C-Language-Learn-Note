# include <iostream>

using namespace std;

int main() {

	float add(float x,float y);
	float a, b, c;
	cout << "Please enter a,b: ";
	cin >> a >> b;
	c = add(a, b);
	cout << "sum = " << c << endl;

	return 0;
}

float add(float x,float y) {
	float z;
	z = x + y;

	return z;
}
