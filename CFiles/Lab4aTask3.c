/* Lab 4a Task 3 */

#include <stdio.h>

int main (void) {


    /*Step a):
      Try to predict the result of the following do loop: */

      //result: 9834, 938, 93, 9
      int i = 9384;
      do {
         printf("%d \n", i);
         i /= 10;
      } while (i>0);
      printf("\n\n\n");

      /* Test you prediction by un-commenting the code, compiling and running it */


   /* Step b)
      Re-write the loop shown in Step a as a for loop.
      <write your code below, and test the program>  */

      for(int i = 9384; i > 0; i /= 10){
        printf("%d \n", i);
      }
      printf("\n\n\n");



   /* Step c):
      Try to predict the result of the following for loop: */

      //result:5,4;4,3;3,2;2,1;1,0
      int j;
      for (i=5,j=i-1; i>0; --i,j=i-1)  {
          printf("i = %d, j = %d\n",i, j);
      }
      printf("\n\n\n");
      /* Test you prediction by un-commenting the code, compiling and running it */



   /* Step d)
      Re-write the loop shown in Step c as a while loop.
      <write your code below, and test the program>  */
      i = 5;
      j = i-1;
      while (i > 0){
        printf("i = %d, j = %d\n",i, j);
        i--;
        j = i-1;
      }





  return 0;
}
