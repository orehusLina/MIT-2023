#include <iostream>
using namespace std;

int fib(int n) {
    if (n <= 1) return 0;
    else if (n == 2) return 1;
    else return fib(n-1) + fib (n-2);
}

int main() {
    cout << "fib(10) = " << fib(10) << '\n';
    return 0;
}