/* C code to convert an unsigned integer into Binary*/

#include "stdio.h"

void int_to_bin_div_method(int num) {

    int arry[16] = {0};
    int i = 0;

    printf("Conversion by division method");
    while(num > 0) {
        arry[i] = num % 2;
        num = num/2;
        printf("i = %d, Reminder: %d, num = %d\n", i, arry[i], num);
        i++;
    }
    printf("Conversion is complete\n");

    /* Print the binary number */
    for(int j = (sizeof(arry)/sizeof(arry[0]))-1; j>=0; j--) {
        printf("%d", arry[j]);
    }
    printf("\n");

    return ;
}

int main() {

    int x = 0;
    
    printf("Enter an integer: ");
    scanf("%u", &x);

    int_to_bin_div_method(x);

    return 0;
}