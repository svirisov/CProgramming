#include <stdio.h>
#include <complex.h>

int main (void){
  double complex z1 = 1.0+2.0*I;
  double complex z2 = 1.0-4.0*I;

  double complex sum = z1+z2;
  double complex product = z1*z2;

  printf("Sum of complex numbers = %.2f + %.2fi\n", creal(sum), cimag(sum));
  printf("Product of complex numbers = %.2f + %.2fi\n", creal(product), cimag(product));

  return 0;
}
