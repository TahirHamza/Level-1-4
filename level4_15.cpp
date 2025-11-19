#include <iostream>
using namespace std;

int main() {
    int n, maxx = -999999;

    while (true) {
        cin >> n;
        if (n == 0) break;
        if (n > maxx) maxx = n;
    }

    cout << "En boyuk eded = " << maxx;
    return 0;
}