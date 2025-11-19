#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Iki eded daxil edin: ";
    cin >> a >> b;
    if (a > b)
        cout << "Boyuk eded: " << a;
    else if (b > a)
        cout << "Boyuk eded: " << b;
    else
        cout << "Ededler beraberdir.";
        return 0;
}