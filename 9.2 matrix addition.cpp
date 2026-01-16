//Matrix Addition
#include<iostream>
using namespace std;

int read(int a[][5]){
	cout << "Enter 15 values for 3x5 Matrix:\t";
	for(int i=0; i<3; i++)
		for(int j=0; j<5;j++)
			cin>>a[i][j];
			
	return 0;
}

int print(int a[][5]){
	for(int i=0; i<3; i++){
		for(int j=0; j<5;j++){
			cout<<a[i][j]<<" ";
		}
		cout << endl;	
	}
	
	return 0;
}



int addMatrix(int a[3][5], int b[3][5]){
	
	int c[3][5];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    print(c);
}


int main(){	

	int a[3][5]={}, b[3][5]={};
	read(a);
	read(b);

	addMatrix(a,b);
}

