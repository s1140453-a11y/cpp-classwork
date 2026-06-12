#include <iostream>
using namespace std;

int main()
{
    double catWeight[6] = {11.2, 10.8, 10.4, 11.5, 12.0, 13.0};
    double sum = 0;

    for (int i = 0; i <= 5; i++) {
        sum = sum + catWeight[i];
    }

    cout << "貓咪平均體重: " << sum / 6;

    return 0;
}
