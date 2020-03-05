#include <stdio.h>

int main(void){
  float input = 0;
  float high = 0;
  int cond = 1;

  while(cond != 0){
    printf("Enter a number: ");
    scanf("%f", &input);

    if(input > high){
      high = input;
    }
    else if(input <= 0){
      cond--;
    }
    else{}
  }

  printf("\nThe highest number was %.3f\n", high);

  return 0;
}
