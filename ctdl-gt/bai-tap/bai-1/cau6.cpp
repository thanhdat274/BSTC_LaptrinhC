#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    k %= n;
    rotate(a.begin(), a.begin() + k, a.end());
    for (int x : a) cout << x << " ";
    return 0;
}
