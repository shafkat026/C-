#include<iostream>
using namespace std;
int main()
{
	double a[5]={11.11,33.33,55.55,60,70};
	double b[5];

/*
	b[0]=a[0];
	b[1]=a[1];
	b[2]=a[2];
*/
	for(int i=0; i<5; i++){
		b[i]=a[i];		
	}	
	for(int i=0; i<5; i++){
		cout << b[i] << ", " ;		
	}
	
}

