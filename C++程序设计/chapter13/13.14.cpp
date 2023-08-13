# include <fstream>
# include <iostream>

using namespace std;

struct Student {
	char name[20];
	int num;
	int age;
	char sex;
};

int main() {
	Student stud[3] = { {"Li",1001,18,'f'},{"Fun",1002,19,'m'},{"Wang",1004,17,'f'} };
	ofstream outfile("stud.dat", ios::binary);
	if (!outfile) {
		cerr << "open error!" << endl;
		abort();
	}

	for (int i = 0; i < 3;i++) {
		outfile.write((char*)&stud[i], sizeof(stud[i]));
	}

	outfile.close();

	return 0;
}
