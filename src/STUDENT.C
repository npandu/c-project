#include<stdio.h>
#include<conio.h>
void main(){

// Variable declaration
int english ,tamil,maths,science,social,total;
float percent;
char name[30] = "achu";
char studying[10] = "yes";

// Value assignment
english = 80;
tamil = 45;
maths = 67;
science = 95;
social = 78;
total = english + tamil + maths + science + social;
percent = total / 5;

// Printing values
printf("the marks of english,tamil,maths,science,socialis %d,%d,%d,%d,%d",english,tamil,maths,science,social);
printf("\nhi  %s ur total",name);
printf(":%d",total);
printf("\n Your percentage is: %f", percent);
printf("\n Is he studing? %s", studying);

getch();
clrscr();

}