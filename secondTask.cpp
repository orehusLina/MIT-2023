#include <iostream>
using namespace std;

void fib(int n) {
    int x1 = 0, x2 = 1;
    for (int i = 0; i < n; ++i) {
        cout << x1 << '\n';
        x2 += x1, x1 = x2 - x1;
    }
}

int main() {
    fib(10);
    return 0;
}