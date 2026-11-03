#include <iostream>
#include <cmath>
using namespace std;

void solveEquation(int, int, int);

int main() {
    int a, b, c;
    while (cin >> a >> b >> c)
        solveEquation(a, b, c);
    return 0;
}

void solveEquation(int a, int b, int c) {
    int D = b * b - 4 * a * c;

    if (D > 0) {
        int x1 = (-b + sqrt(D)) / (2 * a);
        int x2 = (-b - sqrt(D)) / (2 * a);

        if (x1 < x2) {
            swap(x1, x2);
        }

        cout << "Two different roots x1=" << x1
             << " , x2=" << x2 << "\n";
    }
    else if (D == 0) {
        int x1 = (-b) / 2 * a;
        cout << "Two same roots x=" << x1 << "\n";
    }
    else {
        cout << "No real roots" << "\n";
    }
}
