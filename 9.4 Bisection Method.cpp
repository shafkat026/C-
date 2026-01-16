#include <iostream>
#include <cmath>
using namespace std;

double f(double x)
{
    return (5*x*x)-(3*x)-2;
}

double bisect(double xl, double xu){
	if(f(xl)*f(xu)>=0){
		cout <<"No Solution";
		return 0;
	}
	double x;
	for(;;){
		x=(xl+xu)/2;
		if(f(x)*f(xu)>=0){
			xu=x;
	}
	else xl=x;
	if(abs(xl-xu)<0.0001) break;
}
	return x;
}
int main()
{
    double x;
    cout <<bisect(0,1.5);
}

