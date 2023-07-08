#include <iostream>

using namespace std;

template<typename T>
const T & min(const T& t1, const T& t2) {
    return t1 > t2 ? t2 : t1;
}

template<typename T>
const T & max(const T & t1,const T & t2) {
    return t1 > t2 ? t1 : t2;
}

int main() {
    int a, b;
    int mn, mx;

    cout << "Please input 2 numbers:" << endl;

    cin >> a >> b;

    mn = min(a, b);
    cout << "The Min is : " << mn << endl;

    mx = max(a, b);
    cout << "The Max is : " << mx << endl;

    return 0;
}
