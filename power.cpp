#include <iostream>
using namespace std;

int power(int x, int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= x;
    }
    return result;
}

int main() {
    int x, n;
    cout << "Enter x and n: ";
    cin >> x >> n;
    cout << "x^n = " << power(x, n) << endl;
    return 0;
}
