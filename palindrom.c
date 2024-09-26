#include<stdio.h>

int main() {
    int num=0,com,sum=0,rem;
    
    printf("enter a number\n");
    scanf("%d",&num);

    com=num;

    while (com!=0)
    {
        rem=com%10;

        sum=(sum*10)+rem;

        com/=10;
    }

    if (sum==num)
    {
        printf("palindrome");
    }
    else
        printf("not palindrome");

    return 0;
