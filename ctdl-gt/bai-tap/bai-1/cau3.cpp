#include <iostream>
#include <cmath>
#include <vector>
#include <limits>
using namespace std;

struct Point {
    int x, y;
};

int main() {
    int n;
    cin >> n;
    vector<Point> pts(n);
    for (int i = 0; i < n; ++i)
        cin >> pts[i].x >> pts[i].y;

    // a. xa gốc nhất
    int farIdx = 0;
    double maxDist = 0;
    for (int i = 0; i < n; ++i) {
        double dist = sqrt(pts[i].x*pts[i].x + pts[i].y*pts[i].y);
        if (dist > maxDist) {
            maxDist = dist;
            farIdx = i;
        }
    }
    cout << "a. Diem xa nhat: (" << pts[farIdx].x << "," << pts[farIdx].y << ")\n";

    // b. hai điểm gần nhau nhất
    double minDist = numeric_limits<double>::max();
    int idx1 = 0, idx2 = 1;
    for (int i = 0; i < n; ++i)
        for (int j = i+1; j < n; ++j) {
            double d = hypot(pts[i].x - pts[j].x, pts[i].y - pts[j].y);
            if (d < minDist) {
                minDist = d;
                idx1 = i;
                idx2 = j;
            }
        }
    cout << "b. Cap diem gan nhau nhat: (" << pts[idx1].x << "," << pts[idx1].y << ") va ("
         << pts[idx2].x << "," << pts[idx2].y << ")\n";

    // c. hình chữ nhật bao
    int minX = pts[0].x, minY = pts[0].y, maxX = pts[0].x, maxY = pts[0].y;
    for (auto p : pts) {
        minX = min(minX, p.x);
        maxX = max(maxX, p.x);
        minY = min(minY, p.y);
        maxY = max(maxY, p.y);
    }
    cout << "c. Hinh chu nhat: tren trai (" << minX << "," << maxY
         << "), duoi phai (" << maxX << "," << minY << ")\n";

    return 0;
}
