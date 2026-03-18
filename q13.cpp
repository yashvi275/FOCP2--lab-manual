#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, d;
    cin >> a >> b >> c;

    d = b*b - 4*a*c;   // discriminant

    if (d > 0) {
        float r1 = (-b + sqrt(d)) / (2*a);
        float r2 = (-b - sqrt(d)) / (2*a);
        cout << "Real and Different Roots\n";
        cout << r1 << " " << r2;
    }
    else if (d == 0) {
        float r = -b / (2*a);
        cout << "Real and Equal Roots\n";
        cout << r;
    }
    else {
        cout << "Imaginary Roots";
    }

    return 0;
}
