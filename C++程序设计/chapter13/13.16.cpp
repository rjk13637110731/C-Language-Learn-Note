# include <fstream>
# include <iostream>
# include <string>

using namespace std;

struct Student {
	int num;
	char name[20];
	float score;
};

int main() {
	Student stud[5] = { 1001,"Li",85,1002,"Fun",97.5,1004,"Wang",54,1006,"Tan",76.5,1010,"Ling",96 };
	fstream iofile("stud.dat", ios::in | ios::out | ios::binary);
	if (!iofile) {
		cerr << "open error!" << endl;
		abort();
	}
	
	for (int i = 0;i < 5;i++) {
		iofile.write((char*)&stud[i], sizeof(stud[i]));
	}

	Student stud1[5];
	for (int i = 0; i < 5;i=i+2) {
		iofile.seekg(i * sizeof(stud[i]), ios::beg);
		iofile.read((char*)&stud1[i / 2], sizeof(stud1[0]));
		cout << stud1[i / 2].num << " " << stud1[i / 2].name << " " << stud1[i / 2].score << endl;
	}

	cout << endl;

	stud[2].num = 1012;
	strcpy_s(stud[2].name, "Wu");
	stud[2].score = 60;
	iofile.seekp(2 * sizeof(stud[0]), ios::beg);
	iofile.write((char*)&stud[2], sizeof(stud[2]));
	iofile.seekg(0, ios::beg);

	for (int i = 0; i < 5;i++) {
		iofile.read((char*)&stud[i / 2], sizeof(stud[0]));
		cout << stud[i].num << " " << stud[i].name << " " << stud[i].score << endl;
	}

	iofile.close();

	return 0;
}
