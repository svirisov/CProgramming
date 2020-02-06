#include <stdio.h>
#include <math.h>

int main(void){
  float l, a, ef, idensity;
  float resistance, resistivity;

  printf("Enter a value for length: ");
  scanf("%f", &l);

  printf("Enter a value for cross-sectional area: ");
  scanf("%f", &a);

  printf("Enter a value for electric field: ");
  scanf("%f", &ef);

  printf("Enter a value for current density: ");
  scanf("%f", &idensity);

  resistivity = ef/idensity;
  resistance = (resistivity*l)/a;

  printf("Resistivity = %5.3f Ohm-metres\nResistance = %5.3f Ohms",resistivity, resistance);

  return 0;
}
