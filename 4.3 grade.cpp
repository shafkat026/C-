#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int num1;
	cout << "Enter your number:\t";
	cin >> num1;
	if(num1>=90){
		cout<<"Grade: A+"<< endl;
		cout<<"Treat where"<< endl;	
	}

	else if(num1>=80){
		cout<<"Grade: A"<< endl;	
	}
	
	else if(num1>=70){
		cout<<"Grade: B"<< endl;	
	}
	
	else if(num1>=60){
		cout<<"Grade: C"<< endl;	
	}
	
	else if(num1>=50){
		cout<<"Grade: D"<< endl;
		cout<<"Pora-likha Can-ge"<< endl;
	}

	else {
	cout<<"Grade: F"<< endl;
	cout<<"Go Cry"<< endl;
	}
	
}
