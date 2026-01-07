#include<iostream>
using namespace std;

int main()
{
	float w, h, bmi;
	cout<<"Please enter your weight in kg:";
	cin>>w;
	cout<<"Please enter your height in meter:";
	cin>>h;
	bmi = w/(h*h);
	cout<<"Your BMI is:\t "<<bmi;
	
}
