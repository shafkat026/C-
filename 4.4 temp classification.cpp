#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int temp1;
	cout << "Enter Temperature in C:\t";
	cin >> temp1;
	
	if(temp1>= 35){
		cout<<"It's very Hot today!"<< endl;
		cout<<"kutta mora gorom"<< endl;	
	}

	else if(temp1>=25){
		cout<<"The weather is warm."<< endl;	
	}
	
	else if(temp1>=15){
		cout<<"It's a pleasant day."<< endl;	
	}
	
	else if(temp1>=5){
		cout<<"It's quite cold."<< endl;	
	}

	else {
	cout<<"It is freezing outside!"<< endl;
	cout<<"gohrahi gohra"<< endl;
	}
	
}
