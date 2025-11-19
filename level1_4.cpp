#include <iostream>
using namespace std;
int main() {
    double r;
    const double PI = 3.14159;
    cout << "Radiusu daxil edin: ";
    cin >> r;
    double sahe = PI * r * r;
    double cevre = 2 * PI * r;
    cout << "Sahe: " << sahe << endl;
    cout << "Cevre: " << cevre << endl;
    return 0;
}