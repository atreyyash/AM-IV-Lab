#include<bits/stdc++.h>
using namespace std;

// Write a program to solve system of equation
// 8x - 3y + 2z = 20
// 4x - 11y - z = 33
// 6x + 3y + 12z = 35
// using gauss siedel interation method correct to four decimal places

double eq1(double &y,double &z){
	return (20 + 3*y - 2*z)/8 ;
}

double eq2(double &x,double &z){
	return (-1)*((33 - 4*x + z)/11);
}

double eq3(double &x,double &y){
	return (35 - 6*x - 3*y)/12 ;
}
int main(){

	cout<<"\t\t\t\t\tExperiment 3\n\t\t\t\t\tYash Atrey CSE-A 109\n\t\t\t\t\tDate: 06-04-21 \n\n";
	cout<<"Equations are: \n8x - 3y + 2z = 20\n4x - 11y - z = 33\n6x + 3y + 12z = 35\n";
	double x0=0,y0=0,z0=0;

	while(1){
		double x,y,z;
		x = eq1(y0,z0);
		y = eq2(x,z0);
		z = eq3(x,y);

		if((int)(x*10000)-(int)(x0*10000) == 0 and (int)(y*10000)-(int)(y0*10000) == 0 and (int)(z*10000)-(int)(z0*10000) == 0){
			cout<<"x = "<<x0<<endl;
			cout<<"y = "<<y0<<endl;
			cout<<"z = "<<z0<<endl;
			break;
		}
		x0 = x;
		y0 = y;
		z0 = z;
	}
	return 0;

}
