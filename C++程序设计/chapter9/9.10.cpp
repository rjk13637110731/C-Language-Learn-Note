# include <iostream>

using namespace std;

class Box {
public:
	Box(int, int);
	int volume();
	static int height;
	int width;
	int length;
};

Box::Box(int w, int l) {
	width = w;
	length = l;
}

int Box::volume() {
	return (height * width * length);
}

int Box::height = 10;

int main() {
	
	Box box1(15, 20),box2(20,30);
	cout << "The volume of box1 is " << box1.volume() << endl;
	cout << "The volume of box2 is " << box2.volume() << endl;

	return 0;
}
