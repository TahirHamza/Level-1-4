#include <iostream>
using namespace std;
int main() {
    double teref;
    cout << "Kvadratin terefini daxil edin: ";
    cin >> teref;
    double sahe = teref * teref;
    double perimetr = 4 * teref;
    cout << "Sahe: " << sahe << endl;
    cout << "Perimetr: " << perimetr << endl;
    return 0;
}