#include <stdio.h>

void triangle(int a)
{
	int i = 1, j = 1, c = 0;
	while(i <= a){
		j = 1;
		while(j <= i){
			
			printf(" %d ", c);
			j++;
			c += 2;
			
		}
		
		printf("\n");
		i++;
	}
}

int main(){
	
	int num;
	
	printf("Enter a number: ");
	scanf(" %d", &num);
	
	triangle(num);
	
	return 0;
}
