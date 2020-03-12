#include <stdio.h>
#include <math.h>

double poly(double x){
  double p = 3*pow(x,5)+2*pow(x,4)-5*pow(x,3)-x*x -7*x -6;
  return p;
}

int main(void){
  double num;
  printf("Please enter a number: \n");
  scanf("%lf", &num);

  printf("The answer is %.3lf\n", poly(num));
  return 0;
}
