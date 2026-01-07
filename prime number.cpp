#include<iostream>
using namespace std;

bool aprime(int n){
	if(n<=1)
	return false;
	for(int i=2; i*i<=n; i++){
		if(n%i==0)
		return false;
	}
	return true;
}

int main(){
	int num1;
	cout<<"Enter a number:";
	cin >> num1;
	
	if(aprime(num1))
	cout<<num1 <<" is a Prime number.";
	else
	cout << num1 << " is Not a Prime a number."; 
}
