#include <stdio.h>

void power()
{
	int a, b, powr = 1;
	printf("Enter the base: ");
	scanf(" %d", &a);
	
	printf("Enter the exponent: ");
	scanf(" %d", &b);
	
	int i = 1;
	
	for(i ; i <= b; i++)
	{
		powr *= a;
	}
	
	printf("%d to the power of %d is: %d", a, b, powr);
	
}

int main()
{
	power();
	
	return 0;

}
