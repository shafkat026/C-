#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	int i, sum=0, e;
	
	cout <<"enter stating value:\t";
	cin >> i;
	cout <<"enter last value:\t";
	cin >> e;
	
	do{
		sum= sum+i;
		i= i+2;	
	}
	while (i<=e);
	cout << "sum=" << sum << endl;
}


