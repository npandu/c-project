#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,x,f=1;
float SUM=1.0;
clrscr();
printf("\nt\t\t THE EXPONENTIAL SERIES:");
printf("\n\t\t\t ~~~~~~~~~~~~~~~~~~~~~~:");
printf("\n enter the value of x:");
scanf("%d", &x);
printf("\n enter the value of n:");
scanf("%d",&n);
for (i=1;i<n;i++)
{
f=f*i;
SUM+= POW(x,i)/f;
}
printf("\n the result of exponential value: %f",SUM);
getch();
}