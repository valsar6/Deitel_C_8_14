#include <stdbool.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>


bool haveDigit(char * string){
    for(; *string != '\0' && *string != '\n'; string++){
        if (isdigit(*string) == 0){
            puts("");
            printf("%c is not a good value. Please, insert again your number.\n", *string);
            return false;
        }
    }
    puts("");
    return true;
}

