#include <stdio.h>
#include <math.h>

int main() {
    int low = 2, high = 100, i, flag;
    float sum;

    printf("Prime numbers between %d and %d are: ", low, high);

    while (low < high) {
        flag = 0;

        // if low is a non-prime number, flag will be 1
        for (i = 2; i <= sqrt(low); ++i) {
            if (low % i == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0){
            printf("%d ", low);
            sum = sum + low;
        }
        ++low;
    }

    printf("\nThe sum of the primes is %.0f\n", sum);

    return 0;
}
