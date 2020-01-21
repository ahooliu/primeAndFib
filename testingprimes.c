#include <stdio.h>
#include <math.h>
#include "isPrime.c"

int main(){
  int input;
  printf("Enter any positive integer: ");
  scanf("%d", &input);

  int result = isPrime(input);

  if (result == 0){
    printf("This is not a prime number.");
  }
  else{
    printf("This is a prime number.");
  }

  return 0;
}
