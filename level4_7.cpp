#include <iostream>
#include <cmath>
using namespace std;

int main() {
    for (int num = 1; num <= 9999; num++) {
        int temp = num, sum = 0;
        int digitCount = 0;

        int t2 = num;
        while (t2 > 0) { digitCount++; t2 /= 10; }

        while (temp > 0) {
            int r = temp % 10;
            sum += pow(r, digitCount);
            temp /= 10;
        }

        if (sum == num) cout << num << " ";
    }

    return 0;
}