/* Lab 3a Task 2
   In each step a-h you are asked to write some
   statements to test your predictions.
*/

#include <stdio.h>

int main (void) {

   /* Step a):
      Declare and assign two int variables i=7 and j=8 and
      try to predict the result of: i *= j + 1;
      Test your prediction with a suitable printf statement. */
      /* <write the code below>    */

      int i = 7, j = 8;
      int result = i*=j+1;
      printf("result = %d\n",result);

      /* Note: a *= b + c is equivalent to
               a = a * (b + c)
               and not
               a = a * b + c
      */

   /* Step b):
      Declare a third int variable k; assign 1 to i, j and k.
      try to predict the result of: i += j += k;
      Test your prediction with a suitable printf statement. */
      /* <write the code below>    */
      i = 1, j = 1;
      int k = 1;
      result = i+=j+=k;
      printf("result = %d\n", result);

   /* Step c):
      Next assign i=1, j=2 and k=3.
      Try to predict the result of: i -= j -= k;
      Test your prediction with a suitable printf statement. */
      /* <write the code below>    */
      i = 1, j = 2, k = 3;
      result = i-=j-=k;
      printf("result = %d\n", result);

   /* Step d):
      Next assign i=2 and j=1 and k=0.
      Try to predict the result of: i *= j *= k;
      Test your prediction with a suitable printf statement. */
      /* <write the code below>    */
      i = 2, j = 1, k = 0;
      result = i*=j*=k;
      printf("result = %d\n", result);

   /* Step e):
      Next assign i=6 and try to predict the result of:
      j = i += i;
      Test your prediction with a suitable printf statement. */
      /* <write the code below>    */
      i = 6;
      result = j = i+=i;
      printf("result = %d\n", result);

   /* Step f):
      Next assign i=5 and try to predict the result of:
      j = (i -= 2) + 1;
      Test your prediction with a suitable printf statement. */
      /* <write the code below>    */
      i = 5;
      result = j = (i-=2)+1;
      printf("result = %d\n", result);

   /* Step g):
      Next assign i=7 and try to predict the result of:
      j = 6 + (i = 2.5);
      Test your prediction with a suitable printf statement. */
      /* <write the code below>    */
      i = 7;
      result = j = 6+(i=2.5);
      printf("result = %d\n", result);

   /* Step h):
      Finally assign i=2 and j=8, and try to predict the result of:
      j = (i = 6) + (j = 3);
      Test your prediction with a suitable printf statement. */
      /*<write the code below>    */
      i = 2, j = 8;
      result = j = (i = 6) + (j = 3);
      printf("result = %d\n", result);

  return 0;
}
