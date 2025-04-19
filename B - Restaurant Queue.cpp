#include<bits/stdc++.h>
using namespace std;

int main() {
    int Q;
    cin >> Q;
    
    queue<int> line;
    
    for (int i = 0; i < Q; ++i) {
        int type;
        cin >> type;
        
        if (type == 1) {
            int X;
            cin >> X;
            line.push(X);
        } else if (type == 2) {
            cout << line.front() << endl;
            line.pop();
        }
    }
    
    return 0;
}
