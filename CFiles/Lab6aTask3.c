#include <stdio.h>
#include <math.h>

int swap (int x){
  int a, b, n;
  a = x/10;
  b = x%10;
  n = (10*b)+a;
  return n;
}

int main(void){
  int num, new;
  printf("Enter a number between 10 and 100: \n");
  scanf("%d", &num);
  if(10<=num && num<=100){
    new = swap(num);
    printf("The number with digits reversed is %d\n", new);
  }
  else{
    printf("That number is not in the specified range.\n");
  }

  return 0;
}
