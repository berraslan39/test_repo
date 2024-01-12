#include <stdio.h>
#include <math.h>

int binary(int decimalNo){
	int binaryNo, numberBack = decimalNo;
	
	int digit = 0;
	
	do{
		numberBack /= 2;
		digit++; 
		
	}while(numberBack > 0);
	
	int i, bit;
	
	for(i = 1; i < digit - 1; i++){
		
		bit = decimalNo % 2;
		binaryNo += bit * pow(10, i-1);
		decimalNo /= 2;
		
	}
	
	binaryNo += decimalNo / 2;
	
	return binaryNo;
}

int main(){
	int inA;
	
	printf("ENTER A NUMBER: ");
	
	scanf(" %d", &inA);
	
	printf(" %d", binary(inA));
	
	return 0;
}
