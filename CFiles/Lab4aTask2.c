#include <stdio.h>
#include <math.h>

void parta(){
  int count = 0;
  while (count < 12){
    printf("2^%d = %d\n",count, (int)pow(2,count));
    count++;
  }
  return;
}

void partb(){
  int count = 0;
  do{
    printf("2^%d = %d\n",count, (int)pow(2,count));
    count++;
  } while(count < 12);

  return;
}

void partc(){
  for(int i = 0; i < 12; i++){
    printf("2^%d = %d\n",i, (int)pow(2,i));
  }

  return;
}

int main (void){
  int loop;
  printf("Please enter which loop (1, 2, or 3) you would like to run: \n");
  scanf("%d", &loop);

  if (loop == 1){
    parta();
  }
  else if(loop == 2){
    partb();
  }
  else if(loop == 3){
    partc();
  }
  else{
    printf("Sorry, that is not an option.\n");
  }

  return 0;
}
