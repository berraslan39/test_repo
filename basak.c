#include <stdio.h>

int main(){
	
	double odm1, odm2, miles, payment;
	
	printf("MILAGE REIMBURSEMENT CALCULATOR\nEnter  beginning odometer reading: ");
	scanf(" %lf", &odm1);
	printf("Enter ending odometer reading: ");
	scanf(" %lf", &odm2);
	
	miles=odm2-odm1;
	
	payment= miles*(.35);
	
	printf("You travelled %.2lf miles. At $0.35 per mile, your reimbursement is %.2lf.", miles, payment);
	
	
	return 0;
}
