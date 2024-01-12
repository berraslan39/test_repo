#include <stdio.h>

int main(){
	int num, i=1, max1;
	
	printf("10 tane sayi giyiniz: ");
	scanf(" %d", &max1);
	
	while(i<10){
		scanf(" %d", &num);
		if(num>max1){
			max1=num;
		}
		i++;
	}
	
	printf("Max sayi %d", max1);
	
	return 0;
}
