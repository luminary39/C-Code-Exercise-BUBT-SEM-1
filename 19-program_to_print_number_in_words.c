// Program to print number in words

#include <stdio.h>

int main(){

    int i, num, rev_num = 0;

    printf("Enter a Number: ");
    scanf("%d", &num);

    while (num!=0)
    {
        rev_num = (rev_num * 10) + (num % 10);
        num/=10;
    }

    /*
    this was for printing rev_num variable value
    printf("%d", rev_num);
    */

    // while switch case kahini
    while (rev_num!=0)
    {
        switch (rev_num%10)
        {
        case 0:
            printf("Zero ");
            break;

        case 1:
            printf("one ");
            break;

        case 2:
            printf("two ");
            break;

        case 3:
            printf("three ");
            break;

        case 4:
            printf("four ");
            break;

        case 5:
            printf("five ");
            break;

        case 6:
            printf("six ");
            break;

        case 7:
            printf("seven ");
            break;

        case 8:
            printf("eight ");
            break;

        case 9:
            printf("nine ");
            break;
        
        default:
            break;
        }

        // deleting last number of rev_num variable value
        rev_num/=10;
    }
    
    





    return 0;
}