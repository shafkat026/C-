//Table using while

#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	int i=1, a;
	cout << "Table for:\t";
	cin >> a;
	
	do{
		int mult = a*i;
		cout << a << "x" << i << "=" << mult << endl;
		i++;
	}
	while (i<=10);
}


