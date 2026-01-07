#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n;
	for(;;){
		cout<<"Enter int:";
		cin>> n;
		if (n%2==0)continue;
		if (n%3==0) break;
		cout<<"\t Bottom of loop.\n";
	}
	cout<<"\tLoop Terminated.\n";
}
