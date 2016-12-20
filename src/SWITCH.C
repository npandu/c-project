#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter the no between 1 to 3\n");
scanf("%d",&a);
switch(a)
{
case 1:
printf("hai");
break;
case 2:
printf("hello");
break;
case 3:
printf("Magizhchi...");
break;
default:
printf("Enter the correct no");
break;
}
getch();
}