//Table using while

#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	int a;
	cout << "Table for:\t";
	cin >> a;
	
	int i=1;
	while (i<=10){
		int mult = a*i;
		cout << a << "x" << i << "=" << mult << endl;
		i++;
	}
}


