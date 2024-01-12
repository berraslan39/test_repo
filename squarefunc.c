#include <stdio.h>

int square(int a);


int main()
{
	int num;
	
	printf("Enter a number: ");
	scanf( " %d\n", &num);
	
	printf("The square of the number you have provided is %d.\n", square(num));
	
	return 0;
}

int square (int a)
{
	return a*a;
}
