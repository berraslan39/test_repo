#include <stdio.h>

float celciusConv(float);

float fahrenheitConv(float);

int main(){
	double heat, heatConv;
	char choice, cont;
	do{
		printf("Fahrenheit --> Celcius ici C/c\nCelcius --> Fahrenhait icin F/f\nSeciminizi giriniz: ");
		scanf(" %c", &choice);
		
		printf("Sicaklik degerini giriniz: ");
		scanf(" %lf", &heat);
		
		if(choice == 'f' || choice == 'F'){
			heatConv = fahrenheitConv(heat);
			printf("Fahrenheit degeri: %.2lf", heatConv);
		}
		else if(choice == 'c' || choice == 'C'){
			heatConv = celciusConv(heat);
			printf("Celcius degeri: %.2lf", heatConv);
		}
		
		printf("\nDevam etmek ister misiniz? Devam etmek icin D/d: ");
		scanf(" %c", &choice);
	}while(choice == 'd' || choice == 'D');
	
	printf("Cikis yapiliyor...");
	
	return 0;
}

float celciusConv(float heat){
	float result = (float)(5*(heat - 32)/9);
	return result;
}

float fahrenheitConv(float heat){
	float result = (float)9*heat/5 + 32;
	return result;
}
