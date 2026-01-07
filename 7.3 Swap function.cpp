#include<iostream>
#include<cmath>
using namespace std;


void swap(int n1, int n2);		//Function declaration
void swap(int x, int y)		//Function defination
{
	int z;
	z=x;
	x=y;
	y=z;
	cout<<"\n\nswap-after interchange:x="<<x<<"\ty="<<y;
}

int main(){
	int x,y;
	cout <<"\nx=?";
	cin >> x;
	cout <<"\ny=?";
	cin >> y;
	
	cout<<"\n\n main-after input: x=" <<x<<"\ty="<<y;
	swap(x,y);		//Function Call
	
//	cout <<"\n\n main-after calling swap: x=" <<x<<"\ty="<<y<<endl<<endl;
}

