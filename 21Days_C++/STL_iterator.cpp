# include <iostream>
# include <fstream>
# include <iterator>
# include <vector>
# include <string>

using namespace std;

int main() {
	
	vector < string> v1;
	ifstream file("test.txt");
	if (file.fail()) {
		cout << "open filer Tect1.txt failed" << endl;
		return 1;
	}

	copy(istream_iterator<string>(file), istream_iterator<string>(), inserter(v1, v1.begin()));
	copy(v1.begin(), v1.end(), ostream_iterator<string>(cout, " "));

	cout << endl;

	return 0;
}
