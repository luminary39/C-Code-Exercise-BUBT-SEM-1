// Program to find sum of odd numbers in given range

#include <stdio.h>

int main(){

    int i, lower, higher, sum = 0;

    //user input
    printf("Enter Lower Limit: ");
    scanf("%d", &lower);

    printf("Enter Higher Limit: ");
    scanf("%d", &higher);

    // kahini
    if (lower%2==0){
        lower++;
    }

    for (i=lower; i<=higher; i+=2){
        sum+=i;

    }

    printf("Total Sum Of Odd Numbers Between %d to %d is: %d", lower, higher, sum);


    return 0;
}