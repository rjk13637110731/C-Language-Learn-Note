# include <iostream>
# include <cmath>

using namespace std;

int main() {

	float a, b, c, x1, x2;

	while (true) {
		cout << "请输入a,b,c的值：";
		cin >> a >> b >> c;
		float d = (b * b - 4 * a * c);
		if (d >= 0) {
			x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
			x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
			cout << "x1 = " << x1 << endl;
			cout << "x2 = " << x2 << endl;
			break;
		}
		else {
			cout << "没有实根！请重新输入a,b,c的值！" << endl;
		}
	}

	return 0;
}
