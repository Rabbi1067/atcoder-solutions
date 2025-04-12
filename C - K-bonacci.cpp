#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000000;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> A(N + 1, 0);

    for (int i = 0; i < K && i <= N; i++) {
        A[i] = 1;
    }

    long long sum = K <= N ? K : N + 1;
    for (int i = K; i <= N; i++) {
        A[i] = sum % MOD;
        sum = (sum + A[i] - A[i - K] + MOD) % MOD;
    }

    cout << A[N] << endl;

    return 0;
}
