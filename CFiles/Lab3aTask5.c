#include <stdio.h>

int main (void){
  int input;

  printf("Please integer: \n");
  scanf("%d", &input);

  if(input>0 && input<100){
    printf("The number you entered is between 0 and 100 inclusive.\n");
  }
  else if (input < 0){
    printf("The number you entered is less than 0.\n");
  }
  else {
    printf("the number you entered is greater than 100.\n");
  }

  return 0;
}
