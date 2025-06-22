#include "stdio.h"

#define MAX_ARRAY_BUFFER_SIZE 100

void bubblesort(int N, int num[]) {

    for(int i = 0; i < (N); i++)
    {
        for(int j = 0; j < (N - 1 - i); j++)
        {
            if(num[j] > num[j+1])
            {
                int temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }

    printf("Sorted numbers:\n");
    for(int i = 0; i < N; i++) 
    {
        printf("%d\n", num[i]);
    }
    return;
}

int main(int argc, char** argv){

    int number_array[MAX_ARRAY_BUFFER_SIZE] = {};
    int N = 0;

    printf("Enter the number of integers, less than max buffer size:%d, you want to input: \n", MAX_ARRAY_BUFFER_SIZE);
    scanf("%d", &N);

    for(int i = 0; i < 3; i++)
    {
        if(i == 2) {
            printf("\nYou have entered three times incorrect number. \nExiting program\n");
            return 0;
        }
        else {
            if(N >= MAX_ARRAY_BUFFER_SIZE) {
                printf("\nEntered Number is greater than maximum buffer size.\n");
                printf("Enter the number of integers, less than max buffer size:%d, you want to input: \n", MAX_ARRAY_BUFFER_SIZE);
                scanf("%d", &N);
            }
            else {
                break;
            }
        }
    }

    printf("Now enter %d numbers one by one:\n", N);
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &number_array[i]);
        if( i == (N-1))
        {
            printf("You have now entered all %d numbers.\n", N);
        }
    }

    bubblesort(N, number_array);

    return 0;
}
