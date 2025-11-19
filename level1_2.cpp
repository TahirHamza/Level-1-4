#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Iki eded daxil edin: ";
    cin >> a >> b;
    cout << "Cem: " << a + b << endl;
    cout << "Fergi: " << a - b << endl;
    cout << "Hasil: " << a * b << endl;
    if (b != 0)
        cout << "Bolme: " << (double)a / b << endl;
    else
        cout << "0-a bolmek olmaz!" << endl;
    return 0;
}