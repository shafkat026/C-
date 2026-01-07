#include<iostream>
#include<cmath>
using namespace std;


void swap(int &n1, int &n2);		//Function declaration
void swap(int &x, int &y)			//Function defination
{
	int z;
	z=x;
	x=y;
	y=z;
	cout<<"\n\nswap-after interchange:a="<<x<<"\tb="<<y;
}

int main(){
	int a,b;
	cout <<"\na=?";
	cin >> a;
	cout <<"\nb=?";
	cin >> b;
	
	cout<<"\n\n main-after input: a=" <<a<<"\tb="<<b;
	swap(a,b);		//Function Call
	
	cout <<"\n\n main-after calling swap: a=" <<a<<"\tb="<<b<<endl<<endl;
}

