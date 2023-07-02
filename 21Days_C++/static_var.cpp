# include <iostream>

using namespace std;

class test {
	int k;
public:
	static int n;
	test(int kk){
		k = kk;
		n++;
	}
	void disp() {
		cout << "n = " << n << "    k = " << k << endl;
	}
};

int test::n = 0;

int main() {
	test t1(10);
	t1.disp();
	test t2(20);
	t2.disp();
	test::n++;
	t2.disp();
}
