// program_to_find_reverse_of_a_number.c

#include <stdio.h>

int main(){

    int i, n;

    printf("Enter A Number To Reverse: ");
    scanf("%d", &n);

    while (n!=0)
    {
        i = n % 10;
        printf("%d", i);
        n = n / 10;

    }

    return 0;
}