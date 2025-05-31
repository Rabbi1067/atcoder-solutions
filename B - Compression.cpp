#include <iostream>
#include <set>
using namespace std;

int main() {
    int N;
    cin >> N;

    set<int> s;
    for (int i = 0; i < N; ++i) {
        int x;
        cin >> x;
        s.insert(x);
    }

    cout << s.size() << endl;
    for (int num : s) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
