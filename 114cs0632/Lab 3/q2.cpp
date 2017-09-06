#include <iostream>
using namespace std;
int q1,q2;
int max()
{
	q1=-30/-10;
	q2=-80/-20;
	int maximum=-5*q1*q1-10*q2*q2+30*q1+80*q2-180;
	return maximum;
	
}
int main()
{
	cout<<"The partial second order derivative of the profit function gives negative value at \n\n q1=3 \n\n q2=4 \n\n The maxima of the quadratic equation is "<<max();
}
