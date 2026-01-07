#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int score;
	cout<<"Number:";
	cin>> score;
	
	if(score>100 || score<0) cout<<"that is not Valid" << endl;
	else{
		switch(score/10)
		{
			case 10:
			case 9: cout<<"Your Grade is A+" << endl; break;
			
		}
	}
}
