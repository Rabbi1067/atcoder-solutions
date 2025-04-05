#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n>> m;

    long long sum = 0;
    long long power = 1;

    for (int i = 0; i <= m; i++) {
        sum += power;
        if (sum > 1e9) {
            cout << "inf" << endl;
            return 0;
        }
        if (i < m) {
            if (power > 1e9 / n) {
                cout << "inf" << endl;
                return 0;
            }
            power *= n;
        }
    }

    cout << sum << endl;
    return 0;
}
