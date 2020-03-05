#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void){
  FILE *myFile;
  myFile = fopen("numbers.txt", "r");

  //read file into array
  int numberArray[200];
  int i;

  if (myFile == NULL){
      printf("Error Reading File\n");
      exit (0);
  }

  for (i = 0; i < 200; i++){
      fscanf(myFile, "%d,", &numberArray[i] );
  }

  for (i = 0; i < 200; i++){
        printf("Number is: %d\n\n", numberArray[i]);
    }

  fclose(myFile);

  double product, pnew, highest, one, two, three, four;

  for(int j = 0; (j+3) < 200; j++){
    product = numberArray[j]*numberArray[j+1]*numberArray[j+2]*numberArray[j+3];

    if(product>pnew){
      pnew=product;
      one = numberArray[j];
      two = numberArray[j+1];
      three= numberArray[j+2];
      four = numberArray[j+3];
    }
    else{}
  }

  printf("The product is %.3lf from %.3lf, %.3lf, %.3lf, and %.3lf.\n", pnew, one, two, three, four);

  return 0;
}
