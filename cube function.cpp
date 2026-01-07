#include<iostream>
using namespace std;

int cube(int n1){
	return n1* n1* n1;;
}

int main(){
	int a,b;
	cout<<"Enter number:";
	cin >> a;
	
	cout << "Cube of "<< a << " is " <<cube(a);
}

