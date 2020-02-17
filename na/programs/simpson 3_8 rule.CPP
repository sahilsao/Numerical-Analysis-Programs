#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<iomanip>
using namespace std;
float y(float x)
{
return(1/(1+x*x));
}
int main()
{
float x0,xn,s,s1,s2,s3;
float lenh;
int i,n;
//char ch;
//clrscr();
cout<<"Name:Sahil Sao"<<"\nclass:MCA II"<<"\path:D:/Sahil/Simp3/8.cpp";
cout<<"\nEnter the x0,xn,No. of Subinterval"<<endl;
cin>>x0>>xn>>n;
lenh=(xn-x0)/n;
cout<<"\nSimpson's 3/8 Rule";
s1=y(x0)+y(xn);
for(i=1;i<=n-1;i+=3)
s2=s2+y(x0+i*lenh)+y(x0+(i+lenh)*lenh);
for(i=3;i<=n-3;i=i+3)
s3=s3+y(x0+i*lenh);
s=((3*lenh)/8)*(s1+3*s2+2*s3);
cout<<"\nValue of integral is:"<<setw(6)<<setprecision(4)<<s<<endl;
getch();
}
