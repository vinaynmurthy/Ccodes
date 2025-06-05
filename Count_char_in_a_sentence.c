/* Count a character in a string */

#define __STDC_WANT_LIB_EXT1__ 1

#include "stdio.h"
#include "string.h"

int main() {

    char sentence[100] = {};
    char ch =  '\0';
    int len = 0;
    int count = 0;

    printf("Enter a sentence:");
    fgets(sentence, sizeof sentence, stdin);

    printf("Enter the character to be counted in the above sentence: ");
    scanf("%c", &ch);
    
    len = strlen(sentence);
    printf("\nLength of the string: %d\n", len);
           
    for(int i = 0; i < len; i++){
        if(ch == sentence[i]) {
            count++;
        }
    }

    printf("Nr of 'occurance of %c' is: %d\n", ch, count);
    return 0;

}