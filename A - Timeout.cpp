#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, S;
    cin >> N >> S;

    vector<int> T(N);
    for (int i = 0; i < N; ++i) {
        cin >> T[i];
    }

    int lastTap = 0; // time of initial tap

    for (int i = 0; i < N; ++i) {
        if (T[i] - lastTap > S) {
            cout << "No" << endl;
            return 0;
        }
        lastTap = T[i];
    }

    cout << "Yes" << endl;
    return 0;
}
