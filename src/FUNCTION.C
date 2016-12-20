#include<stdio.h>
void main() {
int fnReturn;
fnReturn = printVal();

printf("\nA value from function return: %d", fnReturn);
sum(30, 50);
printf("\n");
makeStar(25);

getch();
clrscr();

}

// Function declaration
printVal() {
printf("This is from outside of main function...");
return 10;
}
// Function with argument
sum(int a, int b) {
int sumV = a + b;
printf("\nThe sum value of A and B is:%d", sumV);
return sumV;
}

makeStar(int str) {
  int j, i;

  for(j = str; j > 0; j--) {

    for(i = 0; i < j; i++) {
	printf("*");
    }

  printf("\n");

  }
  return "value";
}