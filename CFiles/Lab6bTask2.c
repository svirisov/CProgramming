#include <stdio.h>
#include <math.h>

double power(double x, int n){
  if (n != 0){
    return (double)x*power(x, n-1);
  }
  else{
    return 1.0;
  }
}

int main (void){
  double base;
  int exp;

  printf("Please enter x and n: ");
  scanf("%lf %d", &base, &exp);

  printf("The result is: %.3lf\n", power(base, exp));

  return 0;
}
