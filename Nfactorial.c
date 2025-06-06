/* Sample C code to do N factorial using recurssive function */

#include "stdio.h"

int factorial(int num){
    
    if(num == 1) {
        return 1;
    } else {
        return num * factorial((num - 1));
    }
}

int main(){

    int N = 0;
    int Nfactorial = 0;

    printf("Enter a number: \n");
    scanf("%d", &N);
    Nfactorial = factorial(N);

    printf("factorial of %d is: %d\n", N, Nfactorial);

    return 0;
}