#include <iostream>
using namespace std;
int main() {
    int x;
    cout << "Eded daxil edin: ";
    cin >> x;
    if (x > 0)
        cout << "Musbet";
    else if (x < 0)
        cout << "Menfi";
    else
        cout << "Sifir";
        return 0;
}