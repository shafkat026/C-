/*

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a 3-digit number: ";
    cin >> num;

    // Extract digits
    int a = num / 100;          // hundreds
    int b = (num / 10) % 10;    // tens
    int c = num % 10;           // units

    // Form two new numbers using digits
    int newNum1 = c * 100 + b*10 + a;   
    int newNum2 = b * 100 + c*10 +a;   

    // Calculate average
    float avg = (num + newNum1 + newNum2) / 3.0;

    cout << "Original number: " << num << endl;
    cout << "New number 1: " << newNum1 << endl;
    cout << "New number 2: " << newNum2 << endl;
    cout << "Average: " << avg << endl;

    return 0;
}

*/




#include <iostream>
using namespace std;

// Function to create two new numbers from digits
void makeNumbers(int num, int &n1, int &n2) {
    int a = num / 100;          // hundreds
    int b = (num / 10) % 10;    // tens
    int c = num % 10;           // units

	n1 = c * 100 + b*10 + a;
    n2 = b * 100 + c*10 +a;
}

// Function to calculate average
float average(int x, int y, int z) {
    return (x + y + z) / 3.0;
}

int main() {
    int num, newNum1, newNum2;

    cout << "Enter a 3-digit number: ";
    cin >> num;

    makeNumbers(num, newNum1, newNum2);

    float avg = average(num, newNum1, newNum2);

    cout << "Original number: " << num << endl;
    cout << "New number 1: " << newNum1 << endl;
    cout << "New number 2: " << newNum2 << endl;
    cout << "Average: " << avg << endl;


float average(1.0,2.0,3.0);


    return 0;
}

