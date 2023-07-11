# include <iostream>

using namespace std;

int main() {
	
	int year;
	bool leap;

	cin >> year;
	if (((year % 4) == 0&&(year%100)!=0)||(year %400==0)) {
		leap = true;
	}
	else {
		leap = false;
	}
	if (leap) {
		cout << year << "年是闰年！" << endl;
	}
	else {
		cout <<year << "年不是闰年" << endl;
	}

	return 0;
}
