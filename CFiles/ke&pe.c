#include <stdio.h>
#include <math.h>

int main(void){
  double ke, pe, te;
  float m, v, h;
  double g = 9.8;

  printf("Enter a velocity: ");
  scanf("%f", &v);

  printf("Enter a mass: ");
  scanf("%f", &m);

  printf("Enter a height: ");
  scanf("%f", &h);

	ke = 0.5*m*v*v;
  pe = m*g*h;
  te = ke+pe;

	printf("mass = %.2f, velocity = %.2f, height = %.2f, acceleration due to gravity = %.2f\nkenetic energy = %.2f, potential energy = %.2f, total energy = %.2f\n", m, v, h, g, ke, pe, te);

  return 0;
}
