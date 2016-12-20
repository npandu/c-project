#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i,n;
float c,t,x,c1;
clrscr();
printf("\n\t\t\t SUM OF SERIES COS(X)");
printf("\n\t\t\t ~~~~~~~~~~~~~~~~~~~~~");
printf("enter the value of x:");
scanf("%f", &x);
printf("enter the value of n:");
scanf("%d", &n);
x = x * 3.1415 / 180;
c=1;
t=1;
for(i=1;i<n+1;i++)
{
t=t*pow((double)(-1),(double)(2*i-1)*x*x/(2*i*(2*i+1)));
c=c+t;
}
c1=cos(x);
printf("the result of cos(x): %f" ,c1);
getch();
}
