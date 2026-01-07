//Table using while

#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	int i=1, a, sum=0;
	cout << "Enter 1st number:\t";
	cin >> a;
	
	do{
		sum+= i;
		i++;
	}
	while (i<=a);
	cout << "sum=" << sum << endl;
}


