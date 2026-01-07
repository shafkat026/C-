#include<iostream>
#include<cmath>
using namespace std;
//y=ex+sinx+cosx

int main(){
	double x ;
	cout << "enter value of x:";
	cin >> x;
	
	double y = exp (x) + sin (x) + cos(x) ;
	cout << "result (y) =" << y << endl;
	
	return 0;
}

