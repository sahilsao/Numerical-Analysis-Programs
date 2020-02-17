#include <iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;
void main()
{
 	float a[20], b[20], c[20], e[20][20],x1, h, y1 =0.0;
int i,n,j,z,k,w;
cout<<"Name: Sahil Sao"<<"\nclass: MCA II"<<"\npath: d:/Sahil/NumerDiff.cpp";
cout<<"\nEnter the number of terms";
cin>> n;
cout<<"\n Enter the value of x \n";
for(i=0;i<n;i++)
{
cout<<"x ["<< i+1<<"] = ";
cin>>a[i];
}
cout<<"\n Enter the value of y \n";
for (i=0;i<n;i++)
{
cout<<"y["<< i+1<<"] =";
cin>> b[i];
e[1][i] = b[i];
}
cout<<"\n Enter the value of x for computing";
cin>>x1;
for(i=0;i<n;i++)
{
if(a[i]==x1)
{
z= i;
break;
}
}
for (j=0;j<n-1;j++)
{
for(i=n-1;i>0;i--)
{
b[i] = b[i] *b[i-1];
}
c[j] = b[z];
}
for (i=z;i<n-1;i++)
c[i] = 0.0;
h=a[1] *a[0];
cout<<"h = "<<h;
for(i=0;i<n-1;i++)
y1 += c[i] / (i+1);
y1 = y1/h;
cout<<"\n\n The value of dy/dx at x ="<<x1<<"is ="<<y1;
getch();
}
