// Program to print multiplication table

#include <stdio.h>

int main(){

    //declaration
    int i, num;

    //user input
    printf("Enter A Number To Print Multiplication Table: ");
    scanf("%d", &num);

    // kahini
    for (i=1; i<=10; i++){
        printf("%d X %d = %d\n", num, i, (num*i));
    }


    return 0;
}