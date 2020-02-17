#include<iostream>
#include<conio.h>
#include<iomanip>
#include<math.h>
#define N 3
using namespace std;
int main()
{
float a[N][N+1],x[N],aerr,maxerr,t,s,err,fixed;
int i,j,itr,maxitr;
for(i=0;i<N;i++)
x[i]=0;
cout<<"\nName:Sahil Sao"<<"\nclass:Mca II"<<"\nPath:D:/Sahil/GousSei.cpp";
cout<<"\nEnter the Element of the"<<" Argumant Matrix Rowwise"<<endl;
for(i=0;i<N;i++)
for(j=0;j<N+1;j++)
cin>>a[i][j];
cout<<"Enter the allow error"<<"Maximum iteration"<<endl;
cin>>aerr>>maxitr;
cout<<"Iteration"<<setw(6)<<"x[1]"<<setw(11)<<"x[2]"<<setw(11)<<"x[3]"<<endl;
for(itr=1;itr<=maxitr;itr++)
{
maxerr=0;
for(i=0;i<N;i++)
{
s=0;
for(j=0;j<N;j++)
if(j!=i)
s+=a[i][j]*x[j];
t=(a[i][N]-s)/a[i][i];
err=fabs(x[i]-t);
if(err>maxerr)
maxerr=err;
x[i]=t;
}
cout<<setw(5)<<itr;
for(i=0;i<N;i++)
cout<<setw(11)<<setprecision(4)<<x[i];
cout<<endl;
if(maxerr<aerr)
{
cout<<"Converges in"<<setw(3)<<itr<<"iteration"<<endl;
for(i=0;i<N;i++)
cout<<"X["<<setw(3)<<i+1<<"]="<<setw(7)<<setprecision(4)<<x[i]<<endl;
return 0;
}
}
cout<<"Solution does not converge,"<<"Iteration not sufficient"<<endl;  return 1;
}
