int getFib(int num){
	//returns 1 if fibonacci, 0 otherwise.
	if (num == 0) return 0;
	if (num == 1 || num == 2) return 1;
	return getFib(num-1) + getFib(num-2);
}

int isFib(int input){
	int done = 0;				//terminates while loop
	int seqNum = 0;			//which number in the fibonacci sequence, start at 0
	int isFibSeq;   //is this input in the fibonacci sequence? (Boolean)

	while (done != 1){
		int fibNum = getFib(seqNum);    //gets the fibonacci number

		if (fibNum < input){					//if fibNum is smaller than input
			seqNum++;										//make fibNum the next number in the fib sequence
			fibNum = getFib(seqNum);
		}
		if (fibNum == input){        //if fibNum equates the input
			done = 1;									//terminate while loop and set isFibSeq to 1
			isFibSeq = 1;
		}
		if (fibNum > input){				//if fibNum is actualler larger than input
			done = 1;								//terminate while loop and set isFibSeq to 0
			isFibSeq = 0;						//indicating input is NOT in the fibonacci sequence
		}
	}

	if (isFibSeq == 1){
		return 1;
	}else{
		return 0;
	}
}
