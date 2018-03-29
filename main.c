/**
 *      8.14
 *      Scansione di un numero telefonico, nella forma (333) 845-3454
 *      il programma deve trasformare il prefisso in un int, mentre deve inserire il numero telefonico
 *      in un long, partendo da una stringa.
 */


#include <stdio.h>
#include <stdbool.h>
#include "functions.h"
#include "haveDigit.h"


int main() {
    char string[SIZE];
    char * stringPtr = string;
    printf("Insert the cellphone number, in the format of PPP - NNN- NNNNN \n\n");
    printf("P characters indicate the prefix numbers, while N are the number.\n");
    printf("PS: you don't have to insert any line.\n");
    printf("Insert your number now: ");
    do {
        fgets(string, SIZE, stdin);
        //Ho mandato in pensione scanf in favore di fgets; se c'è qualche soluzione più efficace me lo faccia sapere;
        //scanf("%s", string);
    }
    while(haveDigit(string) == false );
    printf("Complete elaboration!\n");
    //printf("%c\n", *stringPtr); Il carattere a cui punta stringPtr è sempre lo stesso; grazie puntatore costante.
    int prefix = givePrefix(stringPtr);
    printf("The prefix you've digited is %d\n", prefix);
    long number = telNumber(stringPtr);
    printf("The telephone number is %ld\n", number);



}





