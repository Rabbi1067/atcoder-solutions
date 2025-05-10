#include <iostream>
using namespace std;

int main() {
    int R, X;
    cin >> R >> X;

    if ((X == 1 && R >= 1600 && R <= 2999) || (X == 2 && R >= 1200 && R <= 2399)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
