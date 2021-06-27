// write a program to evaluate  lim(0-1) (1/(1+x^2)) dx  h=1/6 using
// 1. trapezoidal rule
// 2. simpson 1/3 rule
// 3. simpson 3/8 rule

#include<iostream>
using namespace std;

float fx(float x) {
	return (float)(1/(1+(x*x)));
}


int main() {

	cout<<"\tExperiment-8"<<endl;
	cout<<"\tMade By: Yash Atrey"<<endl;
	cout<<"\tRoll No. : 109-CSEA-19"<<endl;
	cout<<"\tDate : 25-05-21"<<endl;
	cout<<"\nProgram to evaluate  lim(0->1) (1/(1+x^2)) dx  h=1/6 using: ";
	cout<<"\n1. trapezoidal rule";
	cout<<"\n2. simpson 1/3 rule";
	cout<<"\n3. simpson 3/8 rule \n\n";

	float h = 1;
	h/=6;
	int n = 7;
	float x[n];
	for(int i=0; i<n; i++) {
		x[i] = h*i;
	}
	float y[n];
	for(int i=0; i<n; i++) {
		y[i] = fx(x[i]);
	}
	float ans = 0;
	ans+= y[0] + y[n-1];
	for(int i=1; i<n-1; i++) {
		ans+= 2*y[i];
	}
	ans*= h;
	ans/= 2;

	cout<<"Using trapezoidal rule: "<<ans<<endl;

	ans = 0;
	ans+= y[0] + y[n-1];
	for(int i=1; i<n-1; i+=2) {
		ans+= (4*y[i]);
	}
	for(int i=2; i<n-1; i+=2) {
		ans+= (2*y[i]);
	}
	ans*=h;
	ans/=3;

	cout<<"Using simpson 1/3 rule: "<<ans<<endl;

	ans = 0;
	ans+= y[0] + y[n-1];

	for(int i=1; i<n-1; i++) {
		if((i%3) == 0) {
			ans+= (2*y[i]);
		} else {
			ans+= (3*y[i]);
		}
	}

	ans*= (3*h);
	ans/=8;

	cout<<"Using simpson 3/8 rule: "<<ans<<endl;

	return 0;
}
