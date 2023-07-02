# include <iostream>
# include <fstream>

using namespace std;

int main() {
	
	ofstream fout("test.txt");
	if (!fout) {
		cout << "不能打开输出文件。" << endl;
		return 1;
	}

	fout << "Hello World!" << endl;
	fout << 10 << endl;
	fout << hex << 10 << endl;
	fout.close();
	
	ifstream fin("test.txt");
	if (!fin) {
		cout << "不能打开输入文件！" << endl;
		return 1;
	}

	int i;
	char ch;
	char c[20];

	fin >> c;
	fin >> i;
	fin >> ch;

	cout << c << endl;
	cout << i << endl;
	cout << ch << endl;
	
	fin.close();

	return 0;
}