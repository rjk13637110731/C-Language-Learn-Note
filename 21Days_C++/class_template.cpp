# include <iostream>

using namespace std;

template<class T>
class Stack {
	T stack[size];
	int t;
public:
	Stack() {
		t = 0;
	}
	push(const T& ch);
	T& pop();
};

template<class T>
Stack<T>::push(const T& ob) {
	if (t == size) {
		cout << "stack is full" << endl;
		return 0;
	}
	stack[t] = ob;
	t++;
}

template<class T>
T& Stack<T>::pop() {
	if (t == 0) {
		cout << "stack is empty!" << endl;
	}
	t--;
	return stack[t];
}

int main() {
	Stack<char>cs1, cs2;
	cs1.push('a');
	cs2.push('x');
	cs1.push('b');
	cs2.push('y');
	cs1.push('c');
	cs2.push('z');

	for (int i = 0; i < 3;i++) {
		cout << "pop cs1: " << cs1.pop() << endl;
	}

	for (int i = 0; i < 3; i++) {
		cout << "pop cs2: " << cs2.pop() << endl;
	}

	Stack<int>is1, is2;

	is1.push(1);
	is2.push(2);
	is1.push(3);
	is2.push(4);
	is1.push(5);
	is2.push(6);

	for (int i = 0; i < 3;i++) {
		cout << "pop is1: " << is1.pop() << endl;
	}

	for (int i = 0; i < 3; i++) {
		cout << "pop is2: " << is2.pop() << endl;
	}

	return 0;
}
