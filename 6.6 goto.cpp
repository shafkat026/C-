// goto NAME;

#include<iostream>
#include<cmath>
using namespace std;

int main(){
	const int N=5;
	for(int i;i<N;i++){
		for(int j=0; j<N; j++){
			for(int k=0; k<N; k++)
	if(i+j+k>N) goto esc;
	else cout << i+j+k <<" ";
	cout<<"*";}
	
	esc: cout<<"." << endl; //inside the i loop, outside the j loop
}}
