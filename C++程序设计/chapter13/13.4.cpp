# include <iostream>
# include <iomanip>

using namespace std;

int main() {

	const char* a = "BASIC";
	for (int i = 4; i >= 0;i--) {
		cout.put(*(a + i));
	}
	cout.put('\n');

	return 0;
}
