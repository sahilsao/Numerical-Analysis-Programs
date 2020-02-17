#include<iostream>
#include<iomanip>
using namespace std;
float y(float x)
{
return 1/(1+x*x);
}
int main()
{
float x0,xn,h,s;
int i,n;
cout<<"Name: Sahil Sao"<<"\nclass: MCA II"<<"\path:D:/Sahil/Trapozoidl.cpp";
cout<<"\nenter x0,xn no. of subintervals"<<endl;
cin>>x0>>xn>>n;
h=(xn-x0)/n;
s=y(x0)+y(xn);
for(i=1;i<=n;i++)
s +=2*y(x0+i*h);
cout<<"value of integral is"<<setw(6)<<setprecision(4)<<(h/2)*s<<endl;
return 0;
}
