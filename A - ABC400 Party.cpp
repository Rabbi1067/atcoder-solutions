#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (400 % n == 0) {
        int B = 400 / n;
        cout << B << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
