# include <strstream>
# include <iostream>
# include <string>

using namespace std;

struct Student {
	int num;
	char name[20];
	float score;
};

int main() {
	Student stud[3] = { 1001,"Li",85,1002,"Fun",97.5,1004,"Wang",54 };
	
	char c[50];
	ostrstream strout(c, 30);
	for (int i = 0; i < 3;i++) {
		strout << stud[i].num << stud[i].name << stud[i].score;
	}
	strout << ends;
	cout << "array c:" << c << endl;

	return 0;
}
