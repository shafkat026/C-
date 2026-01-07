#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int num1, num2, num3;
	cout << "Enter your numbers:\t";
	cin >> num1 >> num2 >> num3;
	if(num1<=num2 && num1<=num3){
		cout<<"Their minimun is "<< num1 << endl;
	}
	if(num2<=num1 && num2<=num3){
	cout<<"Their minimun is "<< num2 << endl;
	}
	if(num3<=num1 && num3<=num2){
	cout<<"Their minimun is "<< num1 << endl;
	}
}
