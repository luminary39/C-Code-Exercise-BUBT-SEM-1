// Program to print natural numbers from 1 to n

#include <stdio.h>


int main() {
    int i,n;

    // taking user input
	printf("Enter any upper limit number: ");
    scanf("%d", &n);

    printf("Printing Number's From 1 to %d: \n", n);

    for (i=1; i <= n; i++){
        printf("%d\n", i);
    }


	return 0;
}

