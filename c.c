// user will enter a number but programme will print it in reverse

#include <stdio.h>

int main(){

    int i, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n!=0)
    {
        i = n % 10;
        printf("%d", i);
        n = n/10;

    }
    



    return 0;
}