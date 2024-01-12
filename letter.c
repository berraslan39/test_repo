#include <stdio.h>

/*Assume the user enters a series of characters and wants to know how many vowels exist
in it. Let's assume the number of characters in the series entered by the users is 20. Write a
program using a while loop to read the characters and count how many characters of each
vowel occur in it. For example, if the series is 'ABNAVOIEIKONVKAPLBO' then your
program should print:
'A' repeated 2 time(s)
'E' repeated 1 time(s)
'I' repeated 2 time(s)
'O' repeated 3 time(s)
'U' repeated 0 time(s)
Use switch-case statement to count the vowels. Assume all characters are capital
characters.*/

int main(){
	
	char c;
	
	int counter=1, a=0, e=0, i=0, u=0, o=0;
	
	printf("Yazin: ");
	
	while(counter<=20){
		
		scanf(" %c", &c);
		
		switch(c){
			case 'a':case'A':
				a++;
				break;
			case 'o':case'O':
				o++;
				break;
			case 'e':case'E':
				e++;
				break;
			case 'i':case'I':
				i++;
				break;
			case 'u':case'U':
				u++;
				break;
		}
	counter++;
		}

	printf("a %d e %d i %d o %d u %d", a, e, i, o ,u);
	
	return 0;
}

