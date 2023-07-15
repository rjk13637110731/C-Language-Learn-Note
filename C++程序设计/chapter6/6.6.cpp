# include <iostream>

using namespace std;

int main() {

	void select_sort(int *p,int n);
	int a[10], i;
	cout << "Enter the original array:" << endl;

	for (i = 0; i < 10;i++) {
		cin >> a[i];
	}
	cout << endl;

	select_sort(a, 10);
	cout << "The sorted array:" << endl;
	for (i = 0; i < 10;i++) {
		cout << a[i] << " ";
	}

	cout << endl;

	return 0;
}

void select_sort(int *p,int n) {
	int i, j, k, t;
	for (i = 0; i < n - 1;i++) {
		for (j = i + 1; j < n;j++) {
			if (*(p+j) < *(p+i)) {
				t = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = t;
			}
		}
	}
}
