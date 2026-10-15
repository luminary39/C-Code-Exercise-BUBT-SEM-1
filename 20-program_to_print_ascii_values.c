// Program to print ASCII values

/*
ASCII stands for American Standard Code for Information Interchange.
It is a set of integer values that represents
different printable and non-printable characters.
*/

#include <stdio.h>

int main(){

    int i;

    for (i=0; i<=255; i++){
        printf("ASCII Value Of Character %c = %d\n", i, i);
    }



    return 0;
}