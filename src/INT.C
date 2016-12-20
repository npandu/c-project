#include<stdio.h>
#include<conio.h>
void main()
{
int year, PERIOD;
float amount, value, interst;
clrscr();
year = 0;
amount = 1000;
interst = 0.24;
PERIOD = 5;
while(year <= PERIOD) {
printf("%d \t  %f \n", year, amount);
value = amount + amount * interst;
year = year + 1;
amount = value;
}
getch();
}
