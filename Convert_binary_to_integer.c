/* C sample code to convert a binary to integer */

#include "stdio.h"
#include "math.h"

void convert_bin_to_int(int x) {

    int int_num = 0;
    int y = 0;
    int i = 0;
    int temp = x;

    while(temp > 0) {
        y = temp % 10;
        temp = temp/10;
        int_num += y * pow(2,i);
        i++;
    }
    temp = x;
    y = 0;

    printf("\nConversion from binary to integer is complete.");
    printf("\n----------------------------------------------\n");
    printf("Binary: ");
    while(temp > 0) {
        y = temp % 10;
        printf("%d", y);
        temp = temp/10;

    }
    printf("\nInteger: %d\n", int_num);

    return;
}

int main() {
    int num = 0;
    
    printf("Enter a binary.\n");
    scanf("%d", &num);
    
    convert_bin_to_int(num);
    return 0;
}