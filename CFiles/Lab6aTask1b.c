#include <stdio.h>
#include <math.h>

double perimeter(double height, double base){
  double p = 2*(sqrt((height*height)+(pow(base/2, 2))))+base;
  return p;
}

int main (void){
   double h, b;
   printf("Please enter a height and a base:\n");
   scanf("%lf\n", &h);
   scanf("%lf", &b);

   double per = perimeter(h,b);
   printf("The area is %lf\n", per);
   return 0;
 }
