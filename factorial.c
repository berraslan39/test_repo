#include <stdio.h>

int main(){
	
	int i=1, fact=1, num;
	
	printf(" Enter the number you want the factorial of: ");
	scanf(" %d", &num);
	
	while(i<=num){
		fact*=i;
		i++;
	}
	
	printf(" %d", fact);
	
	return 0;
}
