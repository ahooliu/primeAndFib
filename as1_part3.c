#include <stdio.h>
#include <math.h>
//Fibonacci sequence is the sequence of numbers that are a sum of the two
//previous to it, i.e {0,1,1,2,3,5,8,13 . . .} etc
//The sequence is defined by the linear recurrence equation:
//Fn = F(n-1) + F(n-2)
//http://mathworld.wolfram.com/FibonacciNumber.html
//https://www.livescience.com/37470-fibonacci-sequence.html
int isPrime(int i);

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

int isPrime(int i){
  int counter = 2; //divisor
  int isComposite = 0; //result

  while ((isComposite != 1)&&(counter <= i/2)){
    if (i%counter == 0){ //check if divisible by 2 w/ no remainder
      isComposite = 1;
    }                   //if not keep incrementing divisor by 1
    counter++;          //as long as divisor is less than half of input
  }
                        //if still couldn't divide, then i is prime
  if (isComposite == 0){
    return 1;
  }else{
    return 0;
  }
}
