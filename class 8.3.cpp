#include<iostream>
using namespace std;
int print_array(int a[],int size){
	for(int i=0; i<size; i++){
		cout<<a[i]<<",";
	}
}

int main()
{
	double a[5]={11,33,55,60,70};
	double b[5];

	for(int i=0; i<5; i++){
		b[i]=a[i];
	}	
 print_array(a,5);
	
}

