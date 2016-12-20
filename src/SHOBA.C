#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
int i,n;
float s,t,x,s1;
clrscr();
printf("\n\t\t\t SUM OF SERIES FOR SIN(X)");
printf("\n\t\t\t~~~~~~~~~~~~~~~~~~~~~~~\n");
printf("\n\t enter the value of x:");
scanf("%f", &x);
printf("\n\t enter the value of n:");
scanf("%d", &x);
x=x*3.1415/180;
s=x;
t=x;
for(i=1;i<n+1;i++);
{
t=t*pow((double)(-1),(double)(2*i-1))*x*x/(2*i*(2*i+1));
s=s+t;
}
s1=sin(x);
printf("\n\t the result of sin(x): %f",s1);
getch();
}
