# include <iostream>

using namespace std;

int main() {
	
	int a[11];
	int i, j, k;
	cout << "input 10 numbers: " << endl;

	for (i = 1; i < 11;i++) {
		cin >> a[i];
	}

	cout << endl;

	for (j = 1; j <= 9;j++) {
		for (i = 1; i <= 10 - j;i++) {
			if (a[i] > a[i + 1]) {
				k = a[i];
				a[i] = a[i + 1];
				a[i + 1] = k;
			}
		}
	}

	cout << "The stored numbers: " << endl;

	for (i = 1; i < 11;i++) {
		cout << a[i] << " ";
	}

	cout << endl;

	return 0;
}
