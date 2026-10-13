// Program to find sum of digits of a number

#include <stdio.h>

int main(){

    int num, sum = 0;

    printf("Enter Any Number To Find Sum Of It's Digits: ");
    scanf("%d", &num);

    // kahini

    while (num!=0)
    {
        // find the last digit of that number to add in sum variable
        sum += num % 10;

        // remove last digit from the number
        num/=10;
    }

    printf("Sum Of Digits: %d", sum);



    return 0;
}