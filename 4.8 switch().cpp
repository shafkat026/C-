/*
switch (expression)
{case constant1 : statementList1;break;
case constant2 : statementList2;break;
case constant3 : statementList3;break;

case constantN : statementListN;break;
default: statementListP;
}
statementListQ; //optional
*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int score;
	cout << "Enter your test score:";
	cin >> score;
	
	
	switch (score/10)
		{case 10: cout << "Your grade is an A."<< endl;break;
		case 9: cout << "Your grade is an A."<< endl;break;
		case 8: cout << "Your grade is an B."<< endl;break;
		case 7: cout << "Your grade is an C."<< endl;break;
		case 6: cout << "Your grade is an D."<< endl;break;
		case 5: cout << "Your grade is an E."<< endl;break;
		case 4: cout << "Your grade is an G."<< endl;break;
		case 3: cout << "Your grade is an H."<< endl;break;
		case 2: cout << "Your grade is an I."<< endl;break;
		case 1: cout << "Your grade is an J."<< endl;break;
		case 0: cout << "Your grade is an F(Fail)."<< endl;break;
		default: cout << "Error: Score is out of range.\n";break;
	}
	cout <<"Good Bye.";
}

