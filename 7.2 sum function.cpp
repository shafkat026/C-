#include<iostream>
#include<cmath>
using namespace std;

int sum (int x, int y);		//Function declaration

int sum (int x, int y)		//Function defination
{
	int result;
	result = x+y;
	return (result);
}
int main(){
	int x,y,output;
	x=20;
	y=100;
	output = sum(x,y);		//Function Call
	
	cout << output;
return 0;
 }

