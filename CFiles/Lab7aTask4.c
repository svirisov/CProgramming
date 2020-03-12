#include <stdio.h>

void sumavg(double array[], int n, double *s, double *a){
  int j;
  double sum, average;

  for(j=0;j<n;j++){
    sum+=array[j];
  }
  average = sum/((double)n);

  *s = sum;
  *a = average;
}



int main(void){
  int i;
  double arr[5];

  printf("Please enter 5 numbers: \n");

  for (i=0;i<5;i++){
    scanf("%lf", &arr[i]);
  }

  double *sum;
  sum = &arr[0];

  double *avg;
  avg = &arr[0];

  sumavg(arr, 5, sum, avg);

  printf("SUM = %lf, AVG = %lf\n", *sum, *avg);

  return 0;
}
