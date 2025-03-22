#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    string result(N, '-'); 
    
    if (N % 2 == 1) {

        result[N / 2] = '=';
    } else {
       
        result[N / 2 - 1] = '=';
        result[N / 2] = '=';
    }
    
    cout << result << endl;
    return 0;
}
