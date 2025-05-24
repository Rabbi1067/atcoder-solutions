#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    int count = 0;
    for (int i = 1; i <= 6; ++i) {
        for (int j = 1; j <= 6; ++j) {
            if ((i + j >= X) || (abs(i - j) >= Y)) {
                count++;
            }
        }
    }

    double probability = count / 36.0;
    cout << fixed << setprecision(30) << probability << endl;
    return 0;
}
