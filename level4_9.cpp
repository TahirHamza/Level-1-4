#include <iostream>
using namespace std;

bool pal(int x){
    int t = x, rev = 0;
    while (t > 0) {
        rev = rev * 10 + t % 10;
        t /= 10;
    }
    return rev == x;
}

int main() {
    for (int i = 1; i <= 1000; i++)
        if (pal(i)) cout << i << " ";
    return 0;
}