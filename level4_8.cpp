#include <iostream>
using namespace std;

void binary(int n){
    if (n == 0) {
        cout << 0;
        return;
    }
    int b[32], k = 0;
    while (n > 0) {
        b[k++] = n % 2;
        n /= 2;
    }
    for (int i = k - 1; i >= 0; i--)
        cout << b[i];
}

int main() {
    int n, x;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        binary(x);
        cout << endl;
    }
    return 0;
}