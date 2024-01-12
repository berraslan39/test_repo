#include <stdio.h>

int main(){
	int line=1, space=0;
	while(line<=10){
		space=0;
		while(space<line){
			printf(" ");
			space++;
		}
		printf("***\n");
		line++;
		
	}
	
	return 0;
}
