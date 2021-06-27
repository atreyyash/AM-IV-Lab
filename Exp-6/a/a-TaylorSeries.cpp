#include<iostream>
#include<bits/stdc++.h>

using namespace std;

double factorial(int n)
{
    if(n<=1)
        return 1;
    else
        n = n * factorial(n-1);
    return n;
}

int main()
{
    float s, r;
    char c;

    cout<<"Experiment-6  \nDate : 04-05-2021"<<endl;
    cout<<"Yash Atrey"<<endl;
    cout<<"109-CSEA-19"<<endl<<endl;

    float h = 0.1;
	float x = 1.2;

	float arr[] = {0.110,1.21,2.21,2.21,2.21};
	float y = 0;
	for(int i=0;i<5;i++){
		y += (arr[i]*pow(h,i))/factorial(i) ;
	}
	cout<<"Value of y for x = 1.2 is ";
	cout<<y<<endl;



	return 0;

}
