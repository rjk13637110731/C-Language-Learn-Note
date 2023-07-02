# include <iostream>
# include <fstream>

using namespace std;

void open(char str[]) {
	
	int i = 0;
	ifstream f;
	f.open("ok.txt", ios::in);
	if (!f) {
		cout << "not open !" << endl;
		return;
	}
	while (f) {
		f.get(str[i]);
		i++;
	}
	str[i] = '\0';
	f.close();
	cout << str << endl;
}

int len(char str[]) {
	int temp = 0;
	for (int i = 0; str[i] != '\0';i++) {
		temp++;
	}
	return temp;
}

int index(char a[],char b[]) {
	int i, j, temp;
	for (i = 0; i < len(a) - len(b);i++) {
		temp = i;
		j = 0;
		while (j <= len(b) && a[temp]==b[j]) {
			temp++;
			j++;
		}
		if (i == len(b)) {
			return i;
		}
	}
	return -1;
}

int count(char str[]) {
	int i, c = 0;
	for (i = 0; i < len(str);i++) {
		if (str[i] ==' ') {
			c++;
		}
	}
	return c + 1;
}

void output(char str[]) {
	for (int i = 0; i < len(str);i++) {
		cout << str[i];
	}
	cout << endl;
}

void output(char str[],int) {
	for (int i = 0; i < len(str);i++) {
		if (str[i] == ' ') {
			break;
		}
		else {
			cout << str[i];
		}
	}
	cout << endl;
}

int main() {
	
	char m[100];
	char n[] = "OK";
	open(m);
	cout << "单词长度：" << len(m) - 1 << endl;
	cout << "目标单词首次出现的位置：" << index(m,n) << endl;
	cout << "单词数：" << count(m) << endl;
	output(m);
	output(m, 1);

	return 0;
}
