#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int sumA = 0, sumC = 0, sumD = 0;
    double sumB = 0;

    for (int i = 1; i <= n; i++)
        sumA += pow(i, 2);

    for (int i = 1; i <= n; i++)
        sumB += 1.0 / i;

    for (int i = 1; i <= n; i++)
        sumC += pow(2, i);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0)
            sumD -= i;
        else
            sumD += i;
    }

    cout << "Sum of squares = " << sumA << endl;
    cout << "Harmonic sum = " << sumB << endl;
    cout << "Power of 2 sum = " << sumC << endl;
    cout << "Alternating sum = " << sumD << endl;

    return 0;
}
