#include<iostream>
using namespace std;

int L_search(int a[], int size, int x){
	for(int i=0; i<size; i++){
		if(x==a[i]) return i;
	}
	return -1;
}

int main()
{
	int b[]={1,10,12,6,7,3,11,15,17,19,2,5};
	int size;
	int x;
	size= sizeof(b)/sizeof(int);
	cout << "search: ";
	cin>>x;
	cout << L_search(b,size,x);	
}
