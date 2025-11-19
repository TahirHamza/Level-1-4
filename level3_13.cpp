#include <iostream>
using namespace std;

int main() {
    int n, temp, rev = 0;
    cin >> n;

    temp = n;

    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    cout << "Tersi = " << rev << endl;

    if (rev == n) cout << "Palindrome-dur";
    else cout << "Palindrome deyil";

    return 0;
}