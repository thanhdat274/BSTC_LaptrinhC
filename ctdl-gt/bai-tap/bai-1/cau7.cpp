#include <iostream>
using namespace std;

float tinhS(int n, float x) {
    float s = 1, p = 1;
    for (int i = 1; i <= n; i++) {
        p = p * x / i;
        s += p;
    }
    return s;
}

int main() {
    int n;
    float x;
    cin >> n >> x;
    cout << "S(n,x) = " << tinhS(n, x);
    return 0;
}
