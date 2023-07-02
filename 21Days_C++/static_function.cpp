# include <iostream>

using namespace std;

class point {
	static int t;
	int a, b;
public:
	point(int aa = 0,int bb = 0) {
		a = aa;
		b = bb;
		t++;
	}
	point(point &p);
	int geta() {
		return a;
	}
	int getb() {
		return b;
	}
	static void getc() {
		cout << "object id:" << t << endl;
	}
};

point::point(point &p) {
	a = p.a;
	b = p.b;
	t++;
}

int point::t = 0;

int main() {
	
	point getc();
	point ab(2, 3);
	cout << "point ab: " << ab.geta() << "," << ab.getb() << endl;
	ab.getc();
	point ba(ab);
	cout << "point ba: " << ba.geta() << "," << ba.getb() << endl;
	point::getc();

	return 0;
}
