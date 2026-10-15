// program_to_check_palindrome_number.c

#include <stdio.h>

int main(){

    int i, num, rev_num = 0;

    printf("Enter A Number To Check Palindrome: ");
    scanf("%d", &num);
    int OG_Num = num;

    // reversing num

    while (num!=0)
    {
        i=num%10;
        rev_num = (rev_num * 10) + i;
        num/=10;
    }
    
    if (OG_Num == rev_num){
        printf("%d is a Palindrome Number!", OG_Num);
    }

    else{
        printf("%d isn't a Palindrome Number!", OG_Num);
    }


    return 0;
}