#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    double value = static_cast<double>(A) / B;
    int result = static_cast<int>(round(value));
    cout << result << endl;
    return 0;
}
