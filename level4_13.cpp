#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n;

    int tek = 0, cut = 0;

    for (int i = 0; i < n; i++) {
        cin >> x;
        if (i % 2 == 0) cut += x;
        else tek += x;
    }

    cout << "Cut indeks cemi = " << cut << endl;
    cout << "Tek indeks cemi = " << tek;
    return 0;
}