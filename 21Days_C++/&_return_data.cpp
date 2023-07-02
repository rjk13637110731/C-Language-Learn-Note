# include <iostream>
using namespace std;

float temp;
float func1(float r);
float& func2(float r);
float func1(float r) {
	temp = (float)(r * r * 3.14);
	return temp;
}

float& func2(float r) {
	temp = (float)(r * r * 3.14);
	return temp;
}

void main() {
	
	float a = func1(5.0);
	float b = func2(5.0);
	float& c = func2(5.0);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}
