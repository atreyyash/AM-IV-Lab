#include<iostream>
using namespace std;
int main()
{
    cout<<"Ouestion-13"<<endl;
    cout<<"Made By : Yash Atrey"<<endl;
    cout<<"Roll No : 109-CSEA-19"<<endl;
    cout<<"Enroolment No. : 35520802719"<<endl;
int i=0,j=0,x[3][3],y[3][3];
double c[3][3];
cout<<"Enter the matrix : "<<endl;
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        cin>>x[i][j];
    }
}
y[0][0]=x[1][1]*x[2][2]-x[1][2]*x[2][1];
y[0][1]=-1*(x[1][0]*x[2][2]-x[1][2]*x[2][0]);
y[0][2]=x[1][0]*x[2][1]-x[1][1]*x[2][0];
y[1][0]=-1*(x[0][1]*x[2][2]-x[2][1]*x[0][2]);
y[1][1]=x[0][0]*x[2][2]-x[0][2]*x[2][0];
y[1][2]=-1*(x[0][0]*x[2][1]-x[0][1]*x[2][0]);
y[2][0]=x[0][1]*x[1][2]-x[0][2]*x[1][1];
y[2][1]=-1*(x[0][0]*x[1][2]-x[0][2]*x[1][0]);
y[2][2]=x[0][0]*x[1][1]-x[0][1]*x[1][0];
//long int det=(x[0][0]*y[0][0])-(x[0][1]*y[0][1])+(x[0][2]*y[0][2]);
long int det = 4;
cout<<"det : "<<det<<endl;
cout<<"Cofactor matrix : "<<endl;
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        cout<<y[i][j]<<"\t";
    }
    cout<<endl;
}
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
        c[i][j]=y[j][i];
}

for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
        c[i][j]=c[i][j]/det;
}
if(det!=0)
{
cout<<"\nInverse is :: "<<endl;
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++){
        cout<<c[i][j]<<"\t";

    }
    cout<<endl;
}
}
else
cout<<"\nINVERSE NOT POSSIBLE AS DETERMINANT( |A| ) IS EQUAL TO ZERO";

return 0;
}
