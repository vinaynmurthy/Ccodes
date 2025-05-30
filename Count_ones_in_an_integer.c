/* C code to count number of ones in the binary form of the give number */

#include "stdio.h"

int main(){

    int x = 0;
    int y = 0;
    int count = 0;

    printf("Enter a integer: ");
    scanf("%d", &x);

    /* While loop untill x is 0 */
    while (x > 0) { 

        /* Get the LSB of x into y and set all other bits to 0 */
        y = x & 1;
        printf("\nx is %d, y is %d", x, y);

        /* Check if LSB of y is 0 or 1.
            if 1 then increment the counter else continue */
        if ( y == 1) {
            count++;
        }

        /* Right shift bit-wise operator */
        x = x >> 1;
    }
    printf("\nOnes counted is %d\n", count);

    return 0;
}