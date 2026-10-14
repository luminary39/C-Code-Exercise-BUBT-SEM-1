// Program to find first and last digit

#include <stdio.h>

int main(){

    // declaration
    int i, first, last, num;

    printf("Enter Any Number To Find First And Last Digit Of It: ");
    scanf("%d", &num);

    // finding last digit
    last = num%10;

    // first digit
    while (num >= 10)
    {
    num/=10;
    }
    first = num; // setting value for first number
    
    printf("First Digit Is: %d\n", first);
    printf("Last Digit Is: %d", last);
    
    return 0;
}