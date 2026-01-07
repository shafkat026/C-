#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n, count=0, sum=0;
	cout<<"Enter positive integers (0 to quit)"<<endl;
	for(;;)	//forever
	{
		cout<<"\tNumber "<<count+1<<": ";
		cin >> n;
		if(n<=0) break;
		count++;
		sum+=n;
	}
	cout<<"\nThe average of those "<<count<<" numbers is "<<
	double(sum)/count<<endl;
}
