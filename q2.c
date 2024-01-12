#include <stdio.h>

int main(){
	int sum, odd, n;
	printf("Enter number: ");
	scanf(" %d", &n);
	sum=0;
	odd=1;
	do{
		sum+= odd;
		odd+= 2;
		
	}while(odd<n);
	
	printf(" %d", sum);
	
	return 0;
 
}
