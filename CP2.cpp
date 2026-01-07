#include<iostream>
using namespace std;

int main(){
	int a;
	
//for(int b=1; b<=5; b++){
int b;
while(b<=5){
	
	cout << "Enter Number:\t";
	cin >> a;
	
	if(a%2==0){
		cout << a << " is Even." << endl;
	}
	else cout << a << " is Odd." << endl;
}
b=b++;
}
