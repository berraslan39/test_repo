#include <stdio.h>

void func(int n){
	int i, j, k;
	
	for(i = 1; i <= n; i++){
		for(j = n - 1; j >= 0; j--){
			printf(" ");
		}
		
		for( k = i; k <= n; k++){
			printf("c");
		}
		printf(" \n");
	}
}

int main(){
	int a;
	
	printf("Enter a number: ");
	scanf(" %d", &a);
	
	func(a);
	
	return 0;
}
