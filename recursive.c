#include <stdio.h>

int sumRe(int num){
	int sum;
	
	if(num == 1){
		return 1;
	}
	
	else{
		sum = num + sumRe(num - 1);
	}
	
	
	
	return sum;
}

int main(){
	
	int num;
	printf("Enter  number: ");
	scanf(" %d", &num);
	
	printf(" %d", sumRe(num));
	
	return 0;
}
