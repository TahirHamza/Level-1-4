#include <iostream>
using namespace std;

int main() {
    int n, rev = 0, t;
    cin >> n;

    t = n;

    while (t > 0) {
        rev = rev * 10 + t % 10;
        t /= 10;
    }

    cout << "Tersi = " << rev << endl;

    if (rev == n) cout << "Beraberdir";
    else cout << "Beraber deyil";

    return 0;
}