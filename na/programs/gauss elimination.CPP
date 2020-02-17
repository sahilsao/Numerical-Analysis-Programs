# include <iostream>
# include <iomanip>
# include <math.h>
#include  <conio.h>
# define N 3

using namespace std;
int main()
{
float a[N][N+1],x[N],t,s,fixed;
int i,j,k;
cout<<"Name: Sahil Sao \nclass: MCAII"<<"\nPath: D:/Sahil/GousEli.cpp";
cout<<"\n\n ENTER THE ELEMENTS OF THE AGUMENTED MATRIX ROW-WISE \n\n"<<endl;
for (i=0;i<N;i++)
for (j=0;j<N+1;j++)
cin>>a[i][j];
for(j=0;j<N-1;j++)
for(i=j+1;i<N;i++)
{
			t=a[i][j]/a[j][j];
for(k=0;k<N+1;k++)
				a[i][k]-=a[j][k]*t;
}
cout<<"\n THE UPPER TRINGULER MATRIX IS:= \n\n";
for(i=0;i<N;i++)
{
for(j=0;j<N+1;j++)
cout<<"\t"<<setprecision(4)<<a[i][j]; cout<<"\n";
}
for(i=N-1;i>=0;i--)
{
s=0;
for(j=i+1;j<N;j++)
s+=a[i][j]*x[j];
x[i]=(a[i][N]-s)/a[i][i];
}
cout<<"\n THE  SOLUTION  IS :- "<<endl;
for(i=0;i<N;i++)
cout<<"\nx["<<setw(1)<<i+1<<"]="<<setw(7)<<setprecision(4)<<x[i]<<endl;
getch();
}
