//type array-name[array-size];	//declaration
//zero-based indexing

#include<iostream>
using namespace std;
int main()
{
/*	double a[3];
	
	a[2]=55.55;
	a[0]=11.11;
	a[1]=33.33;
*/
	double a[5]= {11.11,33.33,55.55};	//initializing, list
										// it will "zero out"
	
	cout << "a[0]=" << a[0] << endl;
	cout << "a[1]=" << a[1] << endl;
	cout << "a[4]=" << a[4] << endl;	//undefined; so it will show "0" as an initial value
										// if we don't initialized, it will show garbage value
	
	cout << "a[0]=" << a << endl;	//location of a[]


}

