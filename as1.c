#include <stdio.h>
#include "isFib.c"
#include "isPrime.c"
//Assignment 1 part 6: giuen a range x1-x2 inclusive, prints
//only prime fibonacci numbers
int main(){
  int x1, x2; //lower and upper range
  printf("This program will print only prime Fibonacci numbers in a given range (inclusive).\n");
  printf("Enter the lower and upper range, seperated by a space: ");
  scanf("%d %d", &x1, &x2);

  //printf("Fibonaci Sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55 ...\n");
  printf("These values within the range are both Fibonacci AND prime:\n");

  int testVal = x1;     //value to be tested, starting at lower range
  while (testVal <= x2){  //stops when testVal exceeds upper range
    int checkPrime = isPrime(testVal);
    int checkFib = isFib(testVal);

    //if both Prime AND is a fibonacci number, then print it out.
    if ((checkPrime) == 1 && (checkFib == 1)) printf("%d ", testVal);

    testVal++; //increment testVal
  }

  return 0;
}
