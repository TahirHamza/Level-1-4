#include <iostream>
using namespace std;
int main() {
    int s;
    cout << "Saniyeni daxil edin: ";
    cin >> s;
    int saat = s / 3600;
    int deqiqe = (s % 3600) / 60;
    int qaliq_saniye = s % 60;
    cout << "Saat: " << saat << endl;
    cout << "Deqiqe: " << deqiqe << endl;
    cout << "Saniye: " << qaliq_saniye << endl;
    return 0;
}