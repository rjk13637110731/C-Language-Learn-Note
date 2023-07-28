# include <iostream>

# define NULL 0

using namespace std;

struct Student {
	long num;
	float score;
	struct Student* next;
};

int main() {

	Student a, b, c, * head, * p;
	a.num = 31001;
	a.score = 89.5;
	b.num = 31002;
	b.score = 90;
	c.num = 31003;
	c.score = 85;

	head = &a;
	a.next = &b;
	c.next = NULL;
	p = head;

	do {
		cout << p->num << " " << p->score << endl;
		p = p->next;
	} while (p!=NULL);

	return 0;
}
