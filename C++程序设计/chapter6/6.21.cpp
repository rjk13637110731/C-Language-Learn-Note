# include <iostream>

using namespace std;

int main() {
	void sorted(int &,int &,int &);
	int a, b, c;
	int a1, b1, c1;

	cout << "Please enter 3 integers:";
	cin >> a >> b >> c;
	a1 = a;
	b1 = b;
	c1 = c;

	sorted(a1, b1, c1);

	cout << "sorted order is " << a1 << "  " << b1 << "  " << c1 << endl;

	return 0;
}

void sorted(int& i, int& j, int&k) {
	void change(int&, int&);
	if (i > j) {
		change(i, j);
	}
	if (i > k) {
		change(i, k);
	}
	if (j > k) {
		change(j, k);
	}
}

void change(int &x,int &y) {
	int temp = x;
	x = y;
	y = temp;
}
