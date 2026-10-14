// Program to find sum of natural numbers in given range

#include <stdio.h>

int main(){

    // declaration
    int i, start, end, sum=0;

    printf("Enter Start Number: ");
    scanf("%d", &start);

    printf("Enter End Number: ");
    scanf("%d", &end);

    for (i=start; i<=end; i++)
    {
        sum+=i;
    }

    printf("Sum From %d to %d Number Is: %d", start, end, sum);


    return 0;
}