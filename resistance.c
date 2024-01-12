#include <stdio.h>

int main(){
	
	int num, dig, i, ress=0, mult;
	
	printf("Enter the number ypu want the ressistance of: ");
	scanf(" %d", &num);
	
	i=num;
	
	do{
		mult=1;
		while(i){ //basamak carpimi bul
			dig=i%10;
			mult*=dig;
			i/=10;
		}
		ress++; //resistance degerini arttir
		i=mult; //basamak carpimi yeni sayi
	}while(i>=10); //sayi tek basamakli mi kontrol
	
	printf("%d", ress);
	
	return 0;
	
}
