#include <iostream>
using namespace std;

bool sade(int x) {
    if (x <= 1) return false;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0) return false;
    return true;
}

int main() {
    int n;
    cin >> n;

    for (int i = 2; i < n; i++)
        if (sade(i)) cout << i << " ";

    return 0;
}