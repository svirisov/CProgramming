#include <stdio.h>
#include <math.h>
#define M_PI acos(-1.0)

int main (){
  double value, value1, s, c, t;

  printf("Enter a value: ");
  scanf("%lf", &value);

  value1 = value*M_PI;
  s = sin(value1);
  c = cos(value1);
  t = s/c;
  printf("Sin(%f) = %5.3f\nCos(%f) = %5.3f\nTan(%f) = %5.3f", value1, s, value1, c, value1, t);

  return 0;
}
