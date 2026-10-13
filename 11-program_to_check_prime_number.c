// Program to check prime number

#include <stdio.h>

int main(){

    int i, num, isPrime = 1;

    printf("Enter Any Number: ");
    scanf("%d", &num);

    // kahini

    for (i=2; i<=num/2; i++){

        if (num%i==0){
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 1 && num > 1){
        printf("%d Is A Prime Number ! ! !", num);
    }

    else{
        printf("%d Is A Consonent Number ! ! !", num);
    }
  










    return 0;
}