#include <stdio.h>

int count = 1;

int digitCount(int num){

	if(num / 10 > 0){
		digitCount(num / 10);
		count++;
	}
	
}
int main(){
	int num;
	
	do{
		printf("Enter a number: ");
		scanf(" %d", &num);
		
		
		if(num > 0){
			int digit = digitCount(num);
			
			printf("\nThe number has %d digits.", digit);
		
		}
		
		count = 1;
		printf("\n\n");
		
	}while(num > 0);
	
	return 0;
}
