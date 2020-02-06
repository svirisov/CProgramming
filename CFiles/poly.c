#include <stdio.h>

double pow(double a, double b){
  double result = 1.0;
  for (size_t i = 0; i < b; i++) {
    result = result*a;
  }
  return result;
}

int main(void){
  float x, y;
  double five, four, three;

  printf("Enter a value for x: ");
  scanf("%f", &x);

  five = pow(x,5);
  four = pow(x,4);
  three = pow(x,3);
  y = (3*five)+(2*four)-(5*three)-(x*x)+(7*x)-6;

  printf("y = 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\ny = %5.2f", y);

  return 0;
}
