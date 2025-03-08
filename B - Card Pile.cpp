#include <bits/stdc++.h>
using namespace std;

int main() {
    int Q;
    cin >> Q;
    stack<int> s;
    
    for (int i = 0; i < 100; i++) {
        s.push(0);
    }
    while (Q--) {
        int type;
        cin >> type;
        
        if (type == 1) {
            int x;
            cin >> x;
            s.push(x);
        } else if (type == 2) {
            cout << s.top() << "\n";
            s.pop();
        }
    }
    
    return 0;
}
