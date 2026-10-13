// Program to find sum of even numbers in given range

#include <stdio.h>

int main(){

    // declaration
    int i, lower, higher, sum=0;

    // user input
    printf("Enter Lower Limit: ");
    scanf("%d", &lower);

    printf("Enter Higher Limit: ");
    scanf("%d", &higher);

    // kahini

    // i even na thakle even banaiya nite hobe

    if (lower%2!=0){
        lower++;
    }

    for (i=lower; i<=higher; i+=2){
        sum+=i;
    }

    // printing result
    printf("Sum Of Even Numbers Between %d To %d Is: %d", lower,higher, sum); // output: Sum Of Even Numbers Between 10 To 20 Is: 90



    return 0;
}