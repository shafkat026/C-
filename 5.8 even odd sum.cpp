//Even sum

#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	int a, sum=0;
	cout << "Enter initial number:\t";
	cin >> a;
	
	for(int i=a; i <=20; i+=2){
		cout << i <<" ";
		sum= sum+i;
	}
	cout << "\nsum=" << sum << endl;
}


