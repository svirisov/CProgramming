#include <stdio.h>

int main (void){
	double power;
	double voltage = 12;
	double resistance = 7;
	power = (voltage*voltage)/resistance;
	printf("voltage = %f, resistance = %f, power = %f\n", voltage, resistance, power);
	return 0;
}
