#include<iostream>
using namespace std;

int main(){
	float num1, num2;
	int num3, num4;
	
	cout<<"Enter 1st number:\n";
	cin>>num1;
	cout<<"Enter 2nd number:\n";
	cin>>num2;

	
	cout << "Addition = " << num1 + num2 << endl;
	cout << "Subtraction = " << num1 - num2 << endl;
	cout << "Multiplication = " << num1 * num2 << endl;
	cout << "Division = " << num1 / num2 << endl;
//	cout << "Modulus = " << num3 % num4 << endl;
/* modulus works with int only
	cout << 10%3;
	cout << 9%3;
	cout << 10.5%2;
*/

/* for division, if the two inputs were int, it will show only the int part
	cout << 4/1.5;
	cout << 3/2;
*/

	return 0;
}
