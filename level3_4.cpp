#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Eded daxil edin: ";
    cin >> n;

    int f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;

    cout << "Faktorial = " << f;
    return 0;
}