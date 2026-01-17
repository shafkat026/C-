//A perfect number is a positive integer 
//that is equal to the sum of its proper divisors, excluding itself. 
//For example, 6 is a perfect number 
//because its divisors (1, 2, and 3) add up to 6.


#include <iostream>
using namespace std;

bool isPerfect(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            sum += i;
    }
    return sum == n;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPerfect(n))
        cout << n << " is a perfect number." << endl;
    else
        cout << n << " is not a perfect number." << endl;

    return 0;
}
