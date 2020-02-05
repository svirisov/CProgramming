#include <stdio.h>
#include <math.h>

int main(void){
  float c, f;
  printf("Enter a temperature: ");
  scanf("%f", &f);
  c = (f-32)*5/9;
  printf("Temperature in Celsius = %.1f\n",c);
  return 0;
}
