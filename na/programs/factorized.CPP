#include<iostream>
#include<conio.h>
#include<iomanip>
#include<math.h>
#define N 3
using namespace std;
typedef float matrix[N][N];
matrix l,u,a;
float b[N],x[N],v[N];
void urow(int i)
{
float s;
int j,k;
for(j=i;j<N;j++)
{
s=0;
for(k=0;k<N-1;k++)
s+=u[k][j]*l[i][k];
u[i][j]=a[i][j]-s;
}
}
void lcol(int j)
{
float s;
int i,k;
for(i=j+1;i<N;i++)
{
s=0;
for(k=0;k<=j-1;k++)
s+=u[k][j]*l[i][k];
l[i][j]=(a[i][j]-s)/u[j][j];
}
}
void printmat(matrix x)
{
int i,j;
for(i=0;i<N;i++)
{
for(j=0;j<N;j++)
cout<<setw(8)<<setprecision(4)<<x[i][j];
cout<<endl;
}
}
int main()
{
int i,j,m,fixed;
float s;

cout<<"Name: Sahil Sao"<<"\n Class: MCA II"<<"\n Path: d:/Sahil/Factorized.cpp";
cout<<"\n ENTER THE ELEMENTS OF AUGUMENTED MATRIX  ROW-WISE\n\n";
for(i=0;i<N;i++)
{
for(j=0;j<N;j++)
cin>>a[i][j];
cin>>b[i];
}
cout<<fixed;
for(i=0;i<N;i++)
l[i][i]=1.0;
for(m=0;m<N;m++)
{
urow(m);
if(m<N-1)
lcol(m);
}
cout<<setw(30)<<"\n\n UPPER MATRIX IS :-"<<endl;
printmat(u);
cout<<setw(25)<<"\n\n LOWER MATRIX IS:-"<<endl;
cout<<"\n";
printmat(l);
for(i=0;i<N;i++)
{
s=0;
for(j=0;j<=i-1;j++)
s+=l[i][j]*v[j];
v[i]=b[i]-s;
}
for(i=N-1;i>=0;i--)
{
s=0;
for(j=i+1;j<N;j++)
s+=u[i][j]*x[j];
x[i]=(v[i]-s)/u[i][i];
}
cout<<"\n\n THE SOLUTION IS :- "<<"\n";
for(i=0;i<N;i++)
cout<<"\n\t\tx["<<setw(1)<<i+1<<"]="<<setw(6)<<setprecision(4)<<x[i]<<endl;
return 0;
}
