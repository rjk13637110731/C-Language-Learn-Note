# include <iostream>
# include <string>

using namespace std;

int main() {
	
	void max_string(char str[][30],int i);
	int i;
	char country_name[3][30];

	for (i = 0; i < 3;i++) {
		cin >> country_name[i];
	}

	max_string(country_name, 3);

	return 0;
}

void max_string(char str[][30],int n) {
	int i;
	char string[30];
	strcpy_s(string, str[0]);
	for (i = 0; i < n;i++) {
		if (strcmp(str[i],string) > 0) {
			strcpy_s(string, str[i]);
		}
	}
	cout << endl;
	cout << "The largest string is: " << string << endl;
}
