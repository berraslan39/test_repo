#include <stdio.h>


int isPrime(int);

int main(){
	int num;
	char cont;
	
	do{
	
		printf("Enter a number to check if prime: ");
		scanf(" %d", &num);
		
		if(isPrime(num)){
			printf("The number is prime.\nDo you wish to continue?\n\'C\' to continue.\n");
		}
		else{
			printf("The number is not prime.\nDo you wish to continue?\n\'C\' to continue.\n");
		}
		
		scanf(" %c", &cont);
		
	}while(cont == 'c' || cont == 'C');
	
	printf("Quitting...");
	
	return 0;
}

int isPrime(int num){
	int prime = 1, i = 2;
	
	
	for(i; i < num/2; i++){
		if(num % i == 0){
			prime = 0;
			break;
		}
	}
	
	return prime;
}
