#include <iostream>

using namespace std;

int add(int &value){
    value++;
    return value;
}

int main() {
    int v = 10;
    cout << "add() = " << add(v) << endl;
    cout << "v = " << v << endl;
    return 0;
}
