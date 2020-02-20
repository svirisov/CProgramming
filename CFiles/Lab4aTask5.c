#include <stdio.h>
#include <math.h>

double factorial (int num){
  double fact=1;

  for(int j = 1; j <= num; j++){
    fact = fact*((double)j);
  }

  return fact;
}

int main (void){
  int acc;
  double sum;

  printf("Please enter how accurate you want this approximation to be: ");
  scanf("%d", &acc);

  for(int rep = 0; rep <= acc; rep++){
    sum += 1/factorial(rep);
  }

  printf("The approximation of E equals %lf\n", sum);

  return 0;
}
