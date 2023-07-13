# include <iostream>

using namespace std;

int main() {

	extern int max(int, int);

	extern int a, b;
	cout << max(a, b) << endl;

	return 0;
}

int a = 15, b = -7;
