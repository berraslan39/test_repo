#include <stdio.h>

int main(){
	
	int dig, num, sum=0, i;
	
	printf("Enter the number you want to get the sum of the digits of: ");
	scanf(" %d", &num);
	i=num;
	while(i!= 0){
		dig=i%10;
		sum+=dig;
		i/=10;
	}
	
	printf(" %d", sum);
	
	return 0;
}
