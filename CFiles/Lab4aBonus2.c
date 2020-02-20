#include <stdio.h>
#include <math.h>

int main(void){
  float F=0, C, Capprox, diff;

  while(fabs(C-Capprox)<4.0){
    C = (F-32)*5/9;
    Capprox = (F-30)/2;
    F++;
  }

  printf("The largest acceptable value of F is: %f\n", F);

  return 0;
}
