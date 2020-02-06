#include <stdio.h>

int main (void){
	double resistance;
	double resistivity = 22;
	double length = 5;
	double area = 12;
	double ef = 26;
	double idensity = 72;
	resistance = (resistivity*length)/area;
	printf("resistivity = %f, length = %f, area = %f, electric field = %f, current density = %f\nresistance = %5.3f\n", resistivity, length, area, ef, idensity, resistance);
	resistivity = ef/idensity;
	resistance = (resistivity*length)/area;
	printf("resistivity = %5.3f Ohm-metres.\nNew resistance = %5.3f", resistivity, resistance);
	return 0;
}
