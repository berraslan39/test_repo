#include <stdio.h>

int main(){
	
	int num_1, num_2;
	
	do{
		printf("Enter a pair of positive integers: ");
		scanf(" %d %d", &num_1, &num_2);
		while(num_1<=0 || num_2 <= 0){
			printf("Enter a pair of positive integers: ");
			scanf(" %d %d", &num_1, &num_2);
		}
		
	}while(num_1%num_2==0 || num_2<num_1);
	
	printf("The second integer divides the second integer.\n ");
	
	return 0;
}
