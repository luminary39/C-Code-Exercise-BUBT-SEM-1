// Program to find factorial of a number

#include <stdio.h>

int main(){

    //declaration
    int i, num;
    unsigned long long fact = 1;

    printf("Enter A Number To Find Fractional Of It: ");
    scanf("%d", &num);

    for (i=1; i<=num; i++){
        fact *= i;
    }

    printf("Fractiorial Of %d Is: %llu", num, fact);

    return 0;
}