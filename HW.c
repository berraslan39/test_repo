#include <stdio.h>
#include <math.h>

char f0(){
	char press;
	printf("Input S for super prime check , B for binary equivalent, W for weird prime check or Q to quit: ");
	scanf(" %c", &press);
	return press;
}

int f1(){
	int posInt;
	do{
		printf("Enter a positive integer: ");
		scanf(" %d", &posInt);
	}while(posInt <= 0);
	
	return posInt;
}

int f2(int a){
	int i = 0;
	do{
		a /= 2;
		i++; 
	}while(a > 0);
	
	return i;
}

int f3(int x, int y){
	int result = 0;
	int i = 0;
	for(i; i < y; i++){
		result += (x % 2) * pow(10, y - i);
		x /= 2;
	}
	return result;
}

int f4(int x){
	int num = x, i = 1, count = 0;
	while(num > 0){
		for(i ; i < num; i++){
			count += (num % i != 0) ? 1 : 0;
		}
		num /= 10;
	}
	
	if(count){
		return 0;
	}
	
	else{
		return 1;
	}
}

int f5(int x){
	int result = 0, i = 1;
	for(i; i < x; i++){
		result += (x % i) ? 0 : 1;
	}
	
	return result;
}

int f6(int x){
	int num = x, dig, sum = 0;
	while(num > 0){
		dig = num % 10;
		num /= 10;
		sum += dig;
	}
	
	return sum;
}


void f7(int x){
	int num1 = x, num2 = x, num3= x, count1 = 0, count2 = 0, dig = 0, i = 1, j = 1;
	while(num1 > 0){
		i = 1;
		for(i ; i < num1; i++){
			count1 += (num1 % i != 0) ? 0 : 1;
		}
		num1 /= 10;
	}
	
	dig = f6(num2);
	
	while(num3 > 0){
		j = 1;
		for(j ; j < num3; j++){
			count2 += (num3 % j != 0) ? 0 : 1;
		}
	num3 %= (int)pow(10, dig - 1);
	dig--;
	}
	
	(count1 > 0 || count2 > 0) ? printf("The number is not weird prime.") : printf("The number is weird prime.");
}


int main(){
	char button = f0();
	
	int num = f1(), digits;
	
	switch( button ){
		case 's': case 'S':
			
			if (f4(num)){
				printf( "Super prime number. ");
			}
			else{
				printf("Not super prime number.");
			}
			break;
		case 'b': case 'B':
		
			digits = f2(num);
			printf("Binary equivalent of %d is %d", num, f3(num, digits));
			break;
		case 'w': case 'W':
			f7(num);
			break;
		case 'q': case 'Q':
			printf( "Shutting down... ");
			break;
		default:
			printf( "Invalid input. Shutting down...");
	}
	
	return 0;
}


