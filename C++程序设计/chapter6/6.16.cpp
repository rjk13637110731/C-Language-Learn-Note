# include <iostream>

using namespace std;

int main() {
	
	const char** p;
	const char* name[] = {"BASIC","FORTRAN","C++","Pascal","COBOL"};

	p = name + 2;

	cout << *p << endl;
	cout << **p << endl;

	return 0;
}
