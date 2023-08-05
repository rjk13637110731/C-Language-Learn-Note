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
	Complex(double r) {
		real = r;
		imag = 0;
	}
	operator double() {
		return real;
	}
	friend Complex operator+(Complex& c1, Complex& c2);
	void display() {
		cout << "(" << real << "," << imag << "i)" << endl;
	}
private:
	double real;
	double imag;
};


Complex operator+(Complex& c1, Complex& c2) {
	return Complex(c1.real + c2.real, c2.imag + c2.imag);
}

int main() {
	
	Complex a1(3, 4), a2(5, -10), a3;
	double d;
	d = 2.5 + a1;
	a3 = a1 + 2.5;
	cout << d << endl;
	a3.display();

	return 0;
}
