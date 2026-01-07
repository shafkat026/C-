#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int a, n, count=0, sum=0;
	cout<<"how many numbers?\t";
	cin >> a;
	
	cout<<"Enter positive integers (0 to quit)"<<endl;
	
	for(int i=1;i<=a;i++)
	{
		cout<<"\tNumber "<<count+1<<": ";
		cin >> n;
		count++;
		sum+=n;
	}
	cout<<"\nThe average of those "<<count<<" numbers is "<<
	double(sum)/count<<endl;
}
