#define _CRT_SECURE_NO_WARNINGS

# include <iostream>

using namespace std;

int main() {

	int a;
	float b;
	char c;

	scanf_s("%d %c %f",&a,&c,&b);
	printf("a = %d,b = %f,c = %c\n", a, b, c);

	return 0;
}
