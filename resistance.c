#include <stdio.h>

int main (void){
	double resistance;
	double resistivity = 22;
	double length = 5;
	double area = 12;
	resistance = (resistivity*length)/area;
	printf("resistivity = %f, length = %f, area = %f, resistance = %f\n", resistivity, length, area, resistance);
	return 0;
}
