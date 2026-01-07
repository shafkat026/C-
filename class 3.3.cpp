#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double a,b,R;
	cout << "enter value of a:\t";
	cin >> a;
	cout << "enter value of b:\t";
	cin >> b;
	
	R = (sqrt(pow(a,2)+ pow(b,2))) + log( abs(a-b)+1) + sin(a);
	
	cout << "R =" << R << endl;
}
