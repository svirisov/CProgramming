#include <stdio.h>
#include <math.h>

double area(double height, double base){
  double a = 0.5 * height * base;
  return a;
}

int main (void){
   double h, b;
   printf("Please enter a height and a base:\n");
   scanf("%lf\n", &h);
   scanf("%lf\n", &b);

   double ar = area(h,b);
   printf("The area is %lf\n", ar);
   return 0;
 }
