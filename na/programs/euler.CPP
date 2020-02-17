#include<stdio.h>
#include<math.h>
#include<windows.h>
#include<conio.h>
int main()
{
float x, y, x1 =0.0,  y1 =0.0, h, ms = 0.0, flag = 0, y2 = 0.0, t=0.0;
int i, j;

printf("Name:Sahil Sao");
printf("\nclass:MCA II");
printf("\npath:D:/Sahil/Euler.cpp");
printf("\n Enter the value of x");
scanf("%f", &x);
printf("Enter the value of y");
scanf("%f", &y);
printf("Enter the height");
scanf("%f", &h);
i = 7;
printf("x"); gotoxy(10,i); printf("x+y=y1"); gotoxy(28,i);
printf("mean slope");
gotoxy(45,i); printf("old y+.1(mean slope) = new y");
while(x1<x)
{
i++;
do
{
i++;
if(flag ==0)
{
y1 = x1+y;
gotoxy(2,i); printf("%.1f", x1); gotoxy (10,i); printf("%.5f",y1);
gotoxy(28,i);
printf("%.5f", ms);
ms = y1;
y2 = y+h*ms;
gotoxy(45,i); printf("%.5f", y2);
x1 = x1+h;
flag = 1;
}
else
{
ms = (y1 +(x1 + y2))/2.0;
t = y+h*ms;
if (y2 == t)
{
y2 = y+h*ms;
break;
}
gotoxy(2,i);
printf("%d.1f",x1); gotoxy(10,i); printf("%.1f+%.5f", x1 ,y2); y2 = y+h*ms;
gotoxy(28,i);
printf("%.5f", ms);
gotoxy(45,i);
printf("%.5f",y2);
}
} while(1);
y = y2;
printf("\n\n");
flag = 0;
}
}
