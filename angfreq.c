#include <stdio.h>
#include <math.h>
#define M_PI acos(-1.0)
int main (void){
	
	double f = 2.5;
	double angfreq;
	angfreq = 2*M_PI*f;
	printf("pi = %f, frequency = %f, angular frequency = %f\n", M_PI, f, angfreq);
	return 0;
}
