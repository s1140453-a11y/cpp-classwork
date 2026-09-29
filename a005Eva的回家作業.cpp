#include <iostream>

using namespace std;



int main() {

    int t, a1, a2, a3, a4, a5;

    cin >> t;



    for (int i = 0; i < t; i++) {

        cin >> a1 >> a2 >> a3 >> a4;

        if (a3 - a2 == a2 - a1) {

            a5 = a4 + (a3 - a2);

        } else {

            a5 = a4 * (a3 / a2);

        }

        cout << a1 << " " << a2 << " " << a3 << " " << a4 << " " << a5 << "\n";

    }



    return 0;

}
