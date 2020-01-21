#include <stdio.h>
#include "isFib.c"

int main(){
	//int num = 10;
  int num;
	printf("Enter an integer to see if it's in the fibonacci sequence: ");
	scanf("%d\n", &num);

	int result = isFib(num);
	if (result == 1){
		printf("This number is in the Fibonacci sequence.");
	}else{
		printf("This number is NOT in the Fibonacci sequence.");
	}

  return 0;
}
