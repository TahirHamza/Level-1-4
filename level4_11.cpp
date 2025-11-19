#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 1;

    while (a < 1000) {
        cout << a << " ";
        int c = a + b;
        a = b;
        b = c;
    }
    return 0;
}