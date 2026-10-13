// Program to print even numbers in given range

#include <stdio.h>

int main(){


    //declaration
    int lower, higher, i;
    //user input
    printf("Enter Lower Limit: ");
    scanf("%d", &lower);

    printf("Enter Higher Limit: ");
    scanf("%d", &higher);

    printf("Printing Even Numbers From %d to %d range...\n", lower, higher);


    for(i=lower; i<=higher; i+=2){
        if (i%2!=0){
            i++;
        }
        printf("%d\n", i);
    }

    return 0;
}