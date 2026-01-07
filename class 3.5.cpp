#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double cost=500000,b,R;
	cout << "initial construction cost:" << cost << "BDT" << endl;
	
	cost += cost * 0.1;
	cout << "After material price increase (+10%)=" << cost << "BDT" << endl;
	
	cost -= cost * 0.05;	
	cout << "After optimization price decrease (-5%)=" << cost << "BDT" << endl;	
	
	cost *= 2;	
	cout << "After adding phase 2 price increased to =" << cost << "BDT" << endl;
	
	cost /= 4;	
	cout << "Per project cost=" << cost << "BDT" << endl;
}
