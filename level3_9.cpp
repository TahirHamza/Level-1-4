#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool sade = true;

    if (n <= 1) sade = false;
    else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                sade = false;
                break;
            }
        }
    }

    if (sade) cout << "Sadedir";
    else cout << "Sade deyil";

    return 0;
}