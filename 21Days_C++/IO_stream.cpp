#include <iostream>
#include <fstream>

using namespace std;

int main() {

	ofstream saveFile("file_create.txt");
	saveFile << "Hello World";

	return 0;
}