#include <stdio.h>
#include <math.h>

int main(void){
  int i = 2;

  for(int cond = 0; cond < 100; cond = (int)pow(i,2)){
    printf("%d\n", (int)pow(i,2));
    i += 2;
  }

  return 0;
}
