#include<iostream>
using namespace std;

int main(){
	int i,l;
		
	cout << "Enter Starting Year:";
	cin>>i;
	cout << "Enter Last Year:";
	cin>>l;

//	365.2425 d
//	365.25 d
//	.25 x 4 = 1d
//	.0075 x 400 = 3
//	we have to set opposite condition

	for(int year=i; year<= l; year++){
		if(year%4==0 && year%100!=0 || year%400==0){
//		if(year%4==0 && year%400==0 || year%100!=0){

		cout<< year<< "\t";
		}
	}
}
