// C program to find product of digits of a number

#include <stdio.h>

int main(){

    //declaration
    int num, mul=1;

    //user input

    printf("Enter A Digit: ");
    scanf("%d", &num);
    int original = num;

    // kahini

    while (num!=0)
    {
        // find last digit of a number and multiplication and storing values in sum
        mul *= num%10;

        // removing last digit of a number
        num /= 10;
    }

    printf("Multiplication Of All Digits Of %d Is: %d", original, mul);

    return 0;
}