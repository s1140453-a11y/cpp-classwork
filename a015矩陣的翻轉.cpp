#include <iostream>
using namespace std;

int main() {
    int m, n;

    while (cin >> m >> n) {
        int a[100][100];

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }

        // 輸出轉置矩陣
        for (int j = 0; j < n; j++) {
            for (int i = 0; i < m; i++) {
                if (i > 0) cout << " ";
                cout << a[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}
