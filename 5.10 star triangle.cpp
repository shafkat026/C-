//*
//**
//***
//****
//*****

#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	int n, row, col, i;
	cout << "Enter row number:\t";
	cin >> n;
//1
//12
//123
/*	for(row=1; row<=n; row++){
		for(col=1; col<=row; col++){
			cout << "" << col;
		}
		cout << endl;
	}
*/

//*
//**
//***
	
/*	for(int row=1; row<=n; row++){
		for(col=1; col<=row; col++){
			cout <<"*";
		}
		cout << endl;
	}
*/

/*	row=1;
	while (row <= n){
		col = 1;
		while (col<=row){
			cout << "*";
			col++;
		}
		cout << endl;
		row++;
	}
*/

	row = 1;
    do {
        col = 1;
        do {
            cout << "*";
            col++;
        } while(col <= row);

        cout << endl;
        row++;
    } while(row <= n);
}


