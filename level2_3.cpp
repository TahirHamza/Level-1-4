#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Uc eded daxil edin: ";
    cin >> a >> b >> c;
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    cout << "En boyuk eded: " << max;
    return 0;
}