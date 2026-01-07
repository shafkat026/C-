#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	float d,r;
	cout <<"Enter Theta in degree:\n";
	cin >> d;
	r=d*3.1416/180;
	cout << "sin ("<<d<<")=" << sin(r);
//	cout << sin(d*3.1416/180);
return 0;
}
