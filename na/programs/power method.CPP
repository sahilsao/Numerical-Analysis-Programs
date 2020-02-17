#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<process.h>
#define N 3
using namespace std;
void findmax(float *max,float x[N])
{
  		int i;
  		*max=fabs(x[0]);
   		for(i=1;i<N;i++)
   		{
    			if(fabs(x[i])>*max)
     				*max=fabs(x[i]);
   		}
}
void main()
{

  		float a[N][N],x[N],r[N],aerr,err,s,e,errv,t,maxe;
  		int maxitr,i;
cout<<"Name: Sahil Sao"<<"\n Class: MCA II"<<"\n Path: d:/Sahil/Power.cpp";
  		cout<<"\n\nEnter the matrix ";
  		for(int i=0;i<N;i++)
  		{
    			for(int j=0;j<N;j++)
    			{
cin>>a[i][j];
}
  		}
  		cout<<"\n\nEnter the initial approximation :";
  		for(i=0;i<N;i++)
  		{
cin>>x[i];
}
  		cout<<"\n\nEnter allowed error :";cin>>aerr;
  		cout<<"\n\nEnter Maximum iteration : ";cin>>maxitr;
  		cout<<"\n\n\nITR no. \tEigen value\t\tEigenVector\n";
  		findmax(&e,x);
  		for(int itr=1;itr<=maxitr;itr++)
  		{
    			for(i=0;i<N;i++)
    			{
 		s=0;
      				for(int j=0;j<N;j++)
      				{
s=s+a[i][j]*x[j];
}
     				r[i]=s;
    			}
    			findmax(&t,r);
    			for(i=0;i<N;i++)
r[i]=r[i]/t;
   	 		maxe=0;
     			for(i=0;i<N;i++)
     			{
      				err=fabs(x[i]-r[i]);
      				if(err>maxe)
					maxe=err;
      				x[i]=r[i];
     			}
     			errv=fabs(t-e);
     			e=t;
     			cout<<"itr   "<<itr<<"\t\t"<<e;
     			for(i=0;i<N;i++)
      				cout<<"\t\t"<<x[i];
      			cout<<"\n";
      			if((errv<=aerr)&&(maxe<=aerr))
      			{
       				cout<<"\nconverges in "<<itr<<" itration";
       				cout<<"\nLargest eigen value = "<<e<<"\n";
       				cout<<"Eigen value :- \n";
       				for(i=0;i<N;i++)
       				{
cout<<"X["<<i+1<<"] = "<<"\t\t"<<x[i]<<"\n";
}
	 			cout<<"\n";
	 			getch();
	 			exit(0);
      			}
    		}
       		cout<<"solution not coverage";
  		getch();
}
