#include <stdio.h>
#include <math.h>

void swap(int *p, int *q);

int main(void){
  int first, second, *f, *s;
  printf("Please enter two integers: \n");
  scanf("%d\n", &first);
  scanf("%d", &second);

  f = &first;
  s = &second;

  swap(f, s);

  printf("The first number is now %d\n", *f);
  printf("The second number is now %d\n", *s);

  return 0;
}

void swap(int *p, int *q){
  int temp;
  temp = *p;
  *p = *q;
  *q = temp;

  return ;
}
