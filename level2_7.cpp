#include <iostream>
using namespace std;
int main() {
    double a, b;
    char op;
    cout << "Iki eded daxil edin: ";
    cin >> a >> b;
    cout << "Operator daxil edin (+, -, *, /): ";
    cin >> op;
    switch (op) {
        case '+': cout << "Netice: " << a + b; break;
        case '-': cout << "Netice: " << a - b; break;
        case '*': cout << "Netice: " << a * b; break;
        case '/':
            if (b != 0)
                cout << "Netice: " << a / b;
            else
                cout << "0-a bolmek olmaz!";
            break;
        default:
            cout << "Duzgun operator deyil!";
    }
    return 0;
}