#include <stdio.h>

int main (void){
	double amount = 93.75;
	double amountafter = amount;
	int fifty = amount/50;
	amountafter = amountafter-(fifty*50);
	int twenty = amountafter/20;
	amountafter = amountafter-(twenty*20);
	int ten = amountafter/10;
	amountafter = amountafter-(ten*10);
	int five = amountafter/5;
	amountafter = amountafter-(five*5);
	int one = amountafter/1;
	if ((amountafter-one)>0) {
		one = one + 1;
	}
	else {	}
	printf("Amount in euros: %f\n50 Euro notes: %d\n20 Euro notes: %d\n10 Euro notes: %d\n5 Euro notes: %d\n1 Euro coins: %d\n", amount, fifty, twenty, ten, five, one);
	return 0;
}
