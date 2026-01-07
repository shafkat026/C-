#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int num1;
	cout << "Enter a number:\t";
	cin >> num1;
	if(num1>0){
		cout<<"The number is positive"<< endl;	
	}

	else if(num1<0){
		cout<<"The number is negative"<< endl;	
	}

	else {
	cout<<"The number is zero"<< endl;
	}
	
	cout << "ENd" << endl;
}
