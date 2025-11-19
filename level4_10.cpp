#include <iostream>
using namespace std;

int main() {
    char op;
    double a, b;

    while (true) {
        cin >> a >> op >> b;
        
        if (op == '+') cout << a + b << endl;
        else if (op == '-') cout << a - b << endl;
        else if (op == '*') cout << a * b << endl;
        else if (op == '/') cout << a / b << endl;
        else if (op == 'q') break; // q çıxış
        else cout << "Yanlis emeliyyat" << endl;
    }

    return 0;
}