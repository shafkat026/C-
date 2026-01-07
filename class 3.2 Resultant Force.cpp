#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double F1, F2, angle;
	cout << "enter value of first force (N):\n";
	cin >> F1;
	cout << "enter value of second force (N):\n";
	cin >> F2;
	cout << "enter value of angle between them (degree):\n";
	cin >> angle;
	
//	double R = sqrt ( pow(F1,2) + pow(F2,2) + 2 * F1 * F2 * cos(angle * M_PI /180));
	double R = sqrt ( pow(F1,2) + pow(F2,2) + 2 * F1 * F2 * cos(angle * 3.14 /180));
	// M_PI is the value of pi.
	cout<< "Resultant Froce =" << R << endl;
}
