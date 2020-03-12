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
  double num, base;

  printf("Please enter n: ");
  scanf("%lf", &num);

  base = 1+1/num;

  printf("The result is: %.3lf\n", power(base, num));

  return 0;
}
