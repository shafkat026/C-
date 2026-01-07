#include<iostream>
#include<cmath>
using namespace std;


int &max(int &n1, int &n2);		//Function declaration //tu tu tu tu 
int &max(int &x, int &y)		//Function defination
{
	if(x>y)
	return x;
	else return y;
}

int main(){
	int a,b;
	cout <<"\na=?";
	cin >> a;
	cout <<"\nb=?";
	cin >> b;
	
	max(a,b)=4;
	cout<<"Value of a:"<<a<<endl;
	cout<<"Value of b:"<<b<<endl;
}

