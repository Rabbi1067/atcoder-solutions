#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    bool logged_in = false;
    int error_count = 0;

    for (int i = 0; i < N; ++i) {
        string operation;
        cin >> operation;

        if (operation == "login") {
            logged_in = true; 
        } else if (operation == "logout") {
            logged_in = false;
        } else if (operation == "private") {
            if (!logged_in) {
                error_count++;
            }
        } else if (operation == "public") {
            
        }
    }

    cout << error_count << endl;
    return 0;
}
