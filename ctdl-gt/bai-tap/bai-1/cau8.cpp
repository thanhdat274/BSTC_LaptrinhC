#include <iostream>
using namespace std;

float tinhS2(int n, float x) {
    float s = 1, p = 1, sign = 1;
    for (int i = 1; i <= n; i++) {
        p = p * x / i;
        sign = (i % 2 == 0) ? 1 : -1;
        s += sign * p;
    }
    return s;
}

int main() {
    int n;
    float x;
    cin >> n >> x;
    cout << "S(n,x) = " << tinhS2(n, x);
    return 0;
}
