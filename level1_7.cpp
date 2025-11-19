#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Iki eded daxil edin: ";
    cin >> a >> b;
    cout << "Evvel: a = " << a << ", b = " << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "Sonra: a = " << a << ", b = " << b << endl;
    return 0;
}