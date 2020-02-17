#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
double df(double x, double y)
{
return x*y;
}
int main()
{

double x0,y0,h,x,y=0,oldy;
cout<<"Name: Sahil Sao"<<"\nclass: MCA II"<<"\npath: d:/Sahil/Eular.cpp";
cout<<"\nEnter the values of x0, y0, h, x"<<endl;
cin>>x0>>y0;
cout<<"\nEnter the values  h "<<endl;
cin>>h;
cout<<"\nEnter the values of x "<<endl;
cin>>x;
//cout<<fixed;
oldy=y0;
while(x0<x)
{
y = oldy+(h*df(x0,y0));
oldy=y;
x0=x0+h;
cout<<x0<<setw(10)<<df(x0,y0)<<setw(10)<<y<<endl;
}
cout<<"\n The approximate value of y at x=0 is "<<y<<endl;
getch();
}
