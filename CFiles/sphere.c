#include <stdio.h>
#include <math.h>
#define M_PI acos(-1.0)

int main(void){
  float r, v;

  printf("Enter a radius: ");
  scanf("%f", &r);

  v = (4.0/3.0)*M_PI*r*r*r;

  printf("Volume = %.2f\n", v);

  return 0;
}
