/* Sample C code to check for palindrom */

#include "stdio.h"
#include "string.h"
#include "stdbool.h"

int main(int argc, char* argv[]){

    if(argc > 1) {
        
        for(int i = 1; i < argc; i++){
            /* strlen() to find the lenth of the argument */
            int len = strlen(argv[i]);

            /* Note: This code is case sensitive. */
            int j = 0;
            bool palin_flag = 1;
            for (j = 0; j <= len; j++)
            {
                if (argv[i][j] != argv[i][len - 1 - j])
                {
                    palin_flag = 0;
                    break;
                }
            }
            if (palin_flag)
            {
                printf("The string \"%s\" is a palindrom.\n", argv[i]);
            }
            else
            {
                printf("The string \"%s\" is not a palindrom.\n", argv[i]);
                palin_flag = 1;
            }
        }       

    } else {
        printf("Please enter atleast one word.\n");
    }

    return 0;
}