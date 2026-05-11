#include <bits/stdc++.h>
using namespace std;

struct Point {
    double x, y;
    Point operator-(const Point& other) const { return {x - other.x, y - other.y}; }
};

// Cross product of vectors (B-A) and (C-A)
// > 0: Counter-clockwise, < 0: Clockwise, 0: Collinear
double cross_product(Point a, Point b, Point c) {
    Point ab = b - a;
    Point ac = c - a;
    return ab.x * ac.y - ab.y * ac.x;
}

double distSq(Point a, Point b) {
    return (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
}

int main() {
    Point p1 = {0, 0}, p2 = {4, 4}, p3 = {0, 4};
    double cp = cross_product(p1, p2, p3);
    
    if (cp > 0) cout << "Counter-clockwise" << endl;
    else if (cp < 0) cout << "Clockwise" << endl;
    else cout << "Collinear" << endl;
    
    return 0;
}