#include <iostream>
using namespace std;

int main() {
    int n, num;
    int max, min;
    double sum = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter number 1: ";
    cin >> num;
    max = min = num;
    sum += num;

    for (int i = 2; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;
        sum += num;

        if (num > max) max = num;
        if (num < min) min = num;
    }

    cout << "Maximum = " << max << endl;
    cout << "Minimum = " << min << endl;
    cout << "Average = " << sum / n << endl;

    return 0;
}
