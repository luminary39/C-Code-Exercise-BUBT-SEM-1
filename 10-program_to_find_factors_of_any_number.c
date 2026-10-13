// Program to find factors of any number

#include <stdio.h>

int main(){

    //declaration
    int i, num;

    //user input
    printf("Enter Any Number To Find Factors Of It: ");
    scanf("%d", &num);

    printf("All Factor Numbers Of %d Are: \n\n", num);

    // kahini

    for (i=1; i<=num; i++){

        if (num%i==0){
            printf("%d\n", i);
        }
    }


    return 0;
}