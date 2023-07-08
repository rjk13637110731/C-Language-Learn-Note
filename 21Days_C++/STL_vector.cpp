# include <iostream>
# include <vector>

using namespace std;
char str[] = "Hello World";
char* szHW = str;

int main(int argc,char* argv[]) {
	vector<char> vec;
	vector<char>::iterator vi;

	char* cptr = szHW;
	while (*cptr != '\0') {
		vec.push_back(*cptr);
		cptr++;
	}

	for (vi = vec.begin(); vi != vec.end();vi++) {
		cout << *vi;
	}
	cout << endl;
	return 0;
}
