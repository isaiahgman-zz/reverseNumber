#include <stdio.h>

int main(){
	//intialize variables
	int rem, num, reversedNum = 0;
	//take user input
	printf("Enter a number to be reversed: ");
	scanf("%d", &num);
	//cycle through and create reversed number
	while (num >= 1){
		rem = num % 10;
		reversedNum = (reversedNum * 10) + rem;
		num = num / 10;
	} 
	//output
	printf("This is the reversed number: %d\n", reversedNum);
}
