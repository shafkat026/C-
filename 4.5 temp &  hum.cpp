#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int temp1, hum1;
	cout << "Enter Temperature in C:\t";
	cin >> temp1;
	cout << "Enter Humidity:\t";
	cin >> hum1;
	
	if(temp1>= 35){
		cout<<"It's very Hot today!"<< endl;
		
		if(hum1> 70){
			cout<<"It's also very humid!"<< endl;
		} else {
			cout << "But the air is dry";
		}
	}
	else {
	cout<<"The temperature is comfortable."<< endl;
	}
	
}
