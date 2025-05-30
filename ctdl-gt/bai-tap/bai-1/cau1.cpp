#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int sides[] = {a, b, c};
    sort(sides, sides + 3);
    if (sides[0] + sides[1] > sides[2] &&
        sides[0]*sides[0] + sides[1]*sides[1] == sides[2]*sides[2])
        cout << "La tam giac vuong";
    else
        cout << "Khong phai tam giac vuong";
    return 0;
}
