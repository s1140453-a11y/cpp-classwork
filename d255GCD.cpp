#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    long long G[501] = {0};

    // 預先計算每個 N 的答案
    for (int i = 1; i <= 500; i++) {
        G[i] = G[i - 1];

        for (int j = 1; j < i; j++) {
            G[i] += gcd(i, j);
        }
    }

    int N;

    while (cin >> N && N != 0) {
        cout << G[N] << endl;
    }

    return 0;
}
