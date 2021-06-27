#include<iostream>
using namespace std;
int main() {
	cout<<"\tExperiment-9"<<endl;
	cout<<"\tMade by : Yash Atrey"<<endl;
	cout<<"\tRoll no. : 109-CSEA-19"<<endl;
	cout<<"\nProgram to solve the following system of equation by Gauss Jordan Method ";
	cout<<"\n x + 2y + z - w = -2";
	cout<<"\n 2x + 3y -z + 2w = 7";
	cout<<"\n x + y + 3z -2w = -6";
	cout<<"\n x + y + z +  w = 2 \n\n";

	int i,j,k,n=4;

	float x[10];
	float a[10][10] = {
		{1,2,1,-1,-2},
		{2,3,-1,2,7},
		{1,1,3,-2,-6},
		{1,1,1,1,2}
	};

	for(j=0; j<n; j++) {
		for(i=0; i<n; i++) {
			if(i!=j) {
				float b=a[i][j]/a[j][j];
				for(k=0; k<n+1; k++) {
					a[i][k]=a[i][k]-(b*a[j][k]);
				}
			}
		}
	}

	cout<<"\nThe solution is:\n";
	for(i=0; i<n; i++) {
		x[i]=a[i][n]/a[i][i];
		cout<< "x" <<"["<<i<<"]"<< "=" << x[i] << "   "<<endl;
	}
	return(0);
}
