#include <iostream>
#include <cmath>
using namespace std;

double calc(double x)
{
    return (x*x)+7;
}

double diff(double x, double h=0.001){
	return (calc(x+h)-calc(x))/h;
}

int main()
{
    double x;
    cout << "Enter value of x: ";
    cin >> x;

    cout << "Value of the function = "<< calc(x) << endl;
    cout << "Diff of the function = "<< diff(x)<< endl;
    return 0;
}

