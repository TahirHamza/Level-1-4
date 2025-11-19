#include <iostream>
using namespace std;
int main() {
    int il;
    cout << "Il daxil edin: ";
    cin >> il;
    if ((il % 4 == 0 && il % 100 != 0) || (il % 400 == 0))
        cout << "Artıq ildir";
    else
        cout << "Adi ildir";
    return 0;
}