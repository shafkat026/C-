#include <iostream>
using namespace std;

void printDivisors(int n) {
    cout << "Divisors of " << n << " are: ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            cout << i << " ";
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    printDivisors(n);
    return 0;
}
