# include <iostream>

using namespace std;

class Student {
private:
	int num;
	int score;
public:
	void setdata() {
		cin >> num;
		cin >> score;
	}

	void display() {
		cout << "num = " << num << endl;
		cout << "score = " << score << endl;
	}
};

Student std1, std2;

int main() {
	std1.setdata();
	std2.setdata();
	
	std1.display();
	std2.display();

	return 0;
}
