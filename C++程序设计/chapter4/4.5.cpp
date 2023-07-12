# include <iostream>

using namespace std;

int main() {
	
	int max(int a, int b, int c);
	double max(double a, double b, double c);
	long max(long a, long b, long c);

	int i1, i2, i3, i;
	cout << "请输入i1,i2,i3: ";

	cin >> i1 >> i2 >> i3;
	i = max(i1, i2, i3);
	cout << "i_max = " << i << endl;

	double d1, d2, d3, j;
	cout << "请输入d1,d2,d3: ";

	cin >> d1 >> d2 >> d3;
	j = max(d1, d2, d3);
	cout << "j_max = " << j << endl;

	long g1, g2, g3, k;
	cout << "请输入g1,g2,g3: ";

	cin >> g1 >> g2 >> g3;
	k = max(g1, g2, g3);
	cout << "g_max = " << k << endl;

	return 0;
}

int max(int a,int b,int c) {
	if (b > a) {
		a = b;
	}
	if (c > a) {
		a = c;
	}
	return a;
}

double max(double a, double b, double c) {
	if (b > a) {
		a = b;
	}
	if (c > a) {
		a = c;
	}
	return a;
}

long max(long a, long b, long c) {
	if (b > a) {
		a = b;
	}
	if (c > a) {
		a = c;
	}
	return a;
}
