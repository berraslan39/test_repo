#include <stdio.h>

int isLetter(char);

int main(){
	int n, result, i = 1;
	char inputChar;
	
	do{
		printf("Pozitif bir tamsayi giriniz: ");
		scanf(" %d", &n);
	}while(n <= 0);
	
	for(i; i <= n; i++){
		printf("Bir karakter girin: ");
		scanf(" %c", &inputChar);
		
		result = isLetter(inputChar);
		
		if(result == 1){
			printf("%c sayi karakteridir.\n", inputChar);
		}
		else if(result == 2){
			printf("%c harf karakteridir.\n", inputChar);
		}
		else{
			printf("%c ozel karakterdir.\n", inputChar);
		}
	}
	
	
	return 0;
}

int isLetter(char inputChar){
	if('A' <= inputChar && inputChar <= 'Z'){
		return 2;
	}
	else if('a' <= inputChar && inputChar <= 'z'){
		return 2;
	}
	else if('0'<=inputChar && inputChar <= '9'){
		return 1;
	}
	else{
		return 3;
	}
}
