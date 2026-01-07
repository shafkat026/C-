// for(initialization; condition; increment/decrement)

#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	int i, sum=0, a;
	cout << "Enter first Number:\t";
	cin >> i;
	cout << "Enter last Number:\t";
	cin >> a;
	
	for (i; i<=a; i++){
		sum +=i;
	}
	cout << "Sum = " << sum << endl;
}
