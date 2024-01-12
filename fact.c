#include <stdio.h>

int fact(int a)
{
	int fac = 1;
	while(a>0)
	{
		fac *= a;
		a--;
	}
	
	return fac;
}


int main(){
	
	int a;
	printf("Enter the number you want the factorial of: ");
	scanf(" %d", &a);
	
	printf("THe factorial of the number you have provided is: %d", fact(a));
	
	return 0;
}
