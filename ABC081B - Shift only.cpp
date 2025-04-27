#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int operations = 0;

    while (all_of(A.begin(), A.end(), [](int x) { return x % 2 == 0; })) {
        for (int i = 0; i < N; i++) {
            A[i] /= 2;
        }
        operations++;
    }

    cout << operations << endl;

    return 0;
}
