#include "functions.h"
#include <stdlib.h>

long telNumber(char * string){
    char number[NUMBER];
    char * numberPtr = number;
    for (string += PREFIX;  *string != '\0' && *string != '\n';*numberPtr = *string, numberPtr++,string++){
        //Funzione di test, per assicurarmi che il programma funzionasse.
        //printf("String Pointed: %c \t Function String: %c \n", *string, *numberPtr);
    }
    return strtol(number, &numberPtr, 0);

}