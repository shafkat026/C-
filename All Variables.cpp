#include<iostream>
using namespace std;

int main()
{
/*	int myNum = 5;               // Integer (whole number without decimals)
	float FNum = 5.99;    		// Floating point number (with decimals)
	double DNum = 5.99;    		// Floating point number (with decimals)
	char myLetter = 'D';         // Character
	string myText = "Hello";     // String (text)
	bool myBoolean = true;       // Boolean (true or false)

float vs. double
The precision of a floating point value indicates how many digits the value
can have after the decimal point. The precision of float is only six or seven 
decimal digits, while double variables have a precision of about 15 digits. 
Therefore it is safer to use double for most calculations.

*/
	float f1 = 26e3;
	double d1 = 7.26E2;
	cout << f1 << endl;
	cout << d1 << endl;

	string name = "Shafkat";
	int age = 16;
	float height = 5.2;
	cout << name << " is " << age << " years old and " << height << " feet tall.";
return 0;
}
