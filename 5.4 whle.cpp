//Iteration
//code continues until certain condition reached.


/*while(condition){
	statement
	}
	statement
*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){

/*	
	int num1, num2;
	cout << "Enter Number:\t";
	cin >> num1, num2;
	
	while (num1<=5){
		cout << num1 << endl;
		num1 = num1+1;
	}
}
*/
	
	int sum=0, i;
	cout << "Enter Number:\t";
	cin >> i;
	
	while (i<=5){
		sum += i;
		i++;
		cout << "Sum=" << sum << endl;
	}
	cout << "Final Sum=" << sum << endl;
}


