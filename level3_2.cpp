#include <iostream>
using namespace std;

int main() {

    cout << "1-den 100-e qeder cut ededler:" << endl;

    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }

    return 0;
}