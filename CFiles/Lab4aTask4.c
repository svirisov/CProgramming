#include <stdio.h>

int main (void){
  int i, fact = 1;

  printf("Please enter a number: ");
  scanf("%d", &i);

  for(int j = 1; j <= i; j++){
    fact *= j;
  }

  printf("%d equals %d\n",i,fact);

  return 0;
}
