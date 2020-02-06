#include <stdio.h>
#include <math.h>
#define PI acos(-1.0)
#define EPSI 8.85e-12

int main(void){
  float q1, q2, r, answer;

  printf("Enter a value for Q1: ");
  scanf("%f", &q1);

  printf("Enter a value for Q2: ");
  scanf("%f", &q2);

  printf("Enter a value for R: ");
  scanf("%f", &r);

  answer = (q1*q2)/(4*PI*EPSI*r*r);

  printf("The force equals %.2f N\n", answer);

  return 0;
}
