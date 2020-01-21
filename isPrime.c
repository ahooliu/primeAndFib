int isPrime(int i){
  //Returns 1 if prime, 0 otherwise.
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
