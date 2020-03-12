#include <stdio.h>

void min(int a[], int n, int *minimum){
  int j;

  for(j=1;j<n;j++){
    if(*minimum>a[j]){
      *minimum = a[j];
    }
    else{}
  }
}

void max(int a[], int n, int *maximum){
  int j;

  for(j=1;j<n;j++){
    if(*maximum<a[j]){
      *maximum = a[j];
    }
    else{}
  }
}

int main(void){
  int i, arr[5];
  double arrd[5];

  printf("Please enter 5 numbers: \n");

  for (i=0;i<5;i++){
    scanf("%d", &arr[i]);
  }

  int *mini;
  mini = &arr[0];

  min(arr, 5, mini);

  printf("MIN = %d\n", *mini);

  int *maxi;
  maxi = &arr[0];

  max(arr, 5, maxi);

  printf("MIN = %d\n", *maxi);

  return 0;
}
