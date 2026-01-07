// table

#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	int i, a, mult;
	cout << "Table for :\t";
	cin >> a;

	cout << "\nHere is your table for " << a << endl << endl;
	
	for (i=1; i<=10; i++){
		mult = a * i;
		cout << a << "x" << i << "=" << mult << endl;
	}
}
