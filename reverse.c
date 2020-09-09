#include <stdio.h>

int main(){
	
	int rem;
	int num;
	int reversedNum = 0;

	printf("Enter a number to be reversed: ");
	scanf("%d", &num);

	while (num >= 1){
		rem = num % 10;
		reversedNum = (reversedNum * 10) + rem;
		num = num / 10;
	} 

	printf("This is the reversed number: %d\n", reversedNum);
}
