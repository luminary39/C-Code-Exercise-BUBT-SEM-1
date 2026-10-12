// Program to print natural numbers in range

#include <stdio.h>

int main(void){

    int i, start, end;

    // taking user input
    printf("Enter Start Value: ");
    scanf("%d", &start);

    printf("Enter End Value: ");
    scanf("%d", &end);

    printf("Printing Values From %d to %d...\n", start, end);

    for (i = start; i <=end; i++){
        printf("%d\n", i);
    }

    return 0;

}