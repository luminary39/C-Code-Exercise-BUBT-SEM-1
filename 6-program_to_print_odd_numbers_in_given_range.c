// Program to print odd numbers in given range

#include <stdio.h>

int main(){
    //declaration
    int i, lower, higher;

    // getting user input 
    printf("Enter Lower Limit To Print Odd Number: ");
    scanf("%d", &lower);

    printf("Enter Higher Limit To Print Odd Number: ");
    scanf("%d", &higher);

    printf("Printing Odd Numbers From %d To %d Range...\n", lower, higher);

    for (i=lower; i<=higher;i++){

        if (i%2!=0){
            printf("%d\n", i);
        }
    }

    return 0;
}