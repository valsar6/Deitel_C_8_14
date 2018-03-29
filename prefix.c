//
// Created by zioto on 29/03/2018.
//
#include "functions.h"
#include <stdlib.h>

int givePrefix(char * string){
    char prefix[PREFIX];
    char * prefixPtr;
    for (int i = 0; i < 3; ++i, ++string) {
        prefix[i] = *string;
    }
    return  (int) strtol(prefix,&prefixPtr, 0);
}