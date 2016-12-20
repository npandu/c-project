#include<stdio.h>
int amount = 10;
void main() {

clrscr();
add(20, 70);
printf("The function value\n");
printf("Amount value is: %d ", amount);
callByValue();
callByReference();
getch();
}
int add(int a, int b) {
amount = a + b;
return 0;
}
int callByValue() {
int a = 30;
int b = a;
printf("\nvalue of a is %d ", a);
printf("\nValue of b is %d ", b);
printf("\n Now a value is changed to 50");
a = 50;
printf("\n Current b value is %d ", b);
return 0;
}
int callByReference() {
int *a = 30;
int *b = *a;
int valA = &a;
int valB = &b;
printf("\nvalue of a is %d ", valA);
printf("\nValue of b is %d ", valB);
printf("\n Now a value is changed to 50");
*a = 50;
printf("\n Current b value is %d ", valB);
return 0;
}