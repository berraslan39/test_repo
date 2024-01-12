#include <stdio.h>

void palind()
{
	int a, temp, sum = 0, dig;
	
	printf("Enter a number: ");
	scanf(" %d", &a);
	
	temp = a;
	
	while(a > 0)
	{
		dig = a % 10;
		sum = sum * 10 + dig;
		a = a / 10;
	}
	
	if( temp == sum){
		printf("%d is a palindrome number!!", temp);
		
	}
	
	else
	{
		printf("%d is NOT a palindrome number!!", temp);
	}
}

int main(){
	
	palind();
	
	return 0;
}
