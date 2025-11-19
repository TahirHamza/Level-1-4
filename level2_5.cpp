#include <iostream>
using namespace std;
int main() {
    int bal;
    cout << "Bal daxil edin (0-100): ";
    cin >> bal;
    if (bal >= 0 && bal <= 50)
        cout << "Qiymet: F";
    else if (bal <= 60)
        cout << "Qiymet: E";
    else if (bal <= 70)
        cout << "Qiymet: D";
    else if (bal <= 80)
        cout << "Qiymet: C";
    else if (bal <= 90)
        cout << "Qiymet: B";
    else if (bal <= 100)
        cout << "Qiymet: A";
    else
        cout << "Yanlis bal!";
    return 0;
}