# include <iostream>

using namespace std;

class String {
public:
	String() {
		p = NULL;
	}
	String(const char* str);
	void display();
private:
	const char* p;
};

String::String(const char *str) {
	p = str;
}

void String::display() {
	cout << p;
}

int main() {
	
	String string1("Hello"), string2("Book");
	string1.display();
	cout << endl;
	string2.display();

	return 0;
}
