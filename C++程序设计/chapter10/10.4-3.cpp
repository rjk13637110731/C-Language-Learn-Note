# include <iostream>
# include <string>

using namespace std;

class String {
public:
	String() {
		p = NULL;
	}
	String(const char* str);
	friend bool operator >(String &string1,String &string2);
	friend bool operator ==(String& string1, String& string2);
	friend bool operator <(String& string1, String& string2);
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

bool operator >(String& string1, String& string2) {
	if (strcmp(string1.p,string2.p)>0) {
		return true;
	}
	else {
		return false;
	}
}

bool operator ==(String& string1, String& string2) {
	if (strcmp(string1.p, string2.p) == 0) {
		return true;
	}
	else {
		return false;
	}
}

bool operator <(String& string1, String& string2) {
	if (strcmp(string1.p, string2.p) < 0) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	
	String string1("Hello"), string2("Book");
	string1.display();
	cout << endl;
	string2.display();
	cout << endl;
	cout << (string1 > string2) << endl;
	cout << (string1 == string2) << endl;
	cout << (string1 < string2) << endl;

	return 0;
}
