#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int a=10,b=4,R;
	cout << "enter value of a:\t";
	cin >> a;
	cout << "enter value of b:\t";
	cin >> b;
	
	cout << "initial value of a:" << a << "\ninitial value of b:" << b << endl;
	
	a += b;
	cout << "after a += b, a= " << a << endl;
	a -= b;
	cout << "after a -= b, a= " << a << endl;
	a *= b;
	cout << "after a *= b, a= " << a << endl;
	a /= b;
	cout << "after a /= b, a= " << a << endl;
	// last er tate problem ase
	a %= b;
	cout << "after a %= b, a= " << a << endl; 
	
	
	
}
