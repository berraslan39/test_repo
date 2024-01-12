#include <stdio.h>

int main(){
	int a, n, curValue = 100000;
	int numberCounter[] = {};
	
	printf("How many numbers: ");
	scanf(" %d", &n);
	
	int i, j;
	
	printf("Enter numbers: ");
	
	for(i = 0; i < n; i++ ){
		scanf(" %d", &a);
		numberCounter[a]++;
		
	}
	
	for(i = 1; i <= 100000; i++){
		if(numberCounter[i] > 1 && i < curValue){
			curValue = i;
		}
	}
	
	printf("The lowest integer is: %d", curValue);
	
	
	return 0;
	

}
