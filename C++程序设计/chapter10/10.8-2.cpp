# include <iostream>

using namespace std;

class Complex {
public:
	Complex() {
		real = 0;
		imag = 0;
	}
	Complex(double r,double i) {
		real = r;
		imag = i;
	}
	Complex operator+(Complex& c2);
	friend ostream& operator<<(ostream&, Complex&);
	friend istream& operator>>(istream&, Complex&);
private:
	double real;
	double imag;
};

Complex Complex::operator+(Complex &c2) {
	return Complex(real + c2.real, imag + c2.imag);
}

ostream& operator<<(ostream& output,Complex &c) {
	output << "(" << c.real;
	if (c.imag >= 0) {
		output << "+";
	} 
	output << c.imag << "i)" << endl;
	return output;
}

istream& operator>>(istream& input,Complex &c) {
	cout << "input real part and imaginary part of complex number:";
	input >> c.real >> c.imag;
	return input;
}

int main() {
	
	Complex c1(2, 4), c2(6, 10), c3, c4, c5;
	c3 = c1 + c2;
	cout << c3;

	cin >> c4 >> c5;
	cout << "c4 = " << c4 << endl;
	cout << "c5 = " << c5 << endl;
	return 0;
}
