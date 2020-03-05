#include <stdio.h>
#include <math.h>

double perimeter(double height, double base){
  double p = 2*(sqrt((height*height)+(pow(base/2, 2))))+base;
  return p;
}

double area(double height, double base){
  double a = 0.5 * height * base;
  return a;
}

double angle(double height, double base){
  double ang = atan(height/(base/2));
  return ang;
}

int main (void){
   double h, b;
   printf("Please enter a height and a base:\n");
   scanf("%lf\n", &h);
   scanf("%lf", &b);

   double ar = area(h,b);
   double per = perimeter(h,b);
   double angl = angle(h,b);
   printf("The perimeter is %lf\n", per);
   printf("The area is %lf\n", ar);
   printf("The base angles are %.3lf radians.", angl);
   return 0;
 }
