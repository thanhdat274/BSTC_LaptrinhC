#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int* p1 = &a, *p2 = &b;
    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;
    cout << "a = " << a << ", b = " << b;
    return 0;
}
