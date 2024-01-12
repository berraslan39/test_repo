#include <stdio.h>

/*Write a C program to input two integers at a time (x and y), until their product is negative.
The program will and value of F according to the following rule, using loops.
If the product of x and y is odd, then F = 3
x
If the product of x and y is even, then F = y!*/

int main(){
	int a, b, mult;
	do{
	printf("Enter twpo integers: ");
	scanf(" %d %d",&a, &b );
	mult=a*b;
	}while(mult>0);
	
	if(mult%2){
		int i=1, res=1;
		while(i<=a){
			res*=i;
			i++;
		}
	}
	else{
		int i=1, res=1;
		while(i<=b){
			res*=i;
			i++;
		}
	printf(" %d", res);
	}
	
	
	return 0;
}
